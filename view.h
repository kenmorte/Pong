#ifndef VIEW_H
#define VIEW_H

#include <QGraphicsView>
#include <QObject>
#include "model.h"
#include <iostream>
#include <QTimer>
#include "paddle.h"
#include "movingball.h"


class View : public QGraphicsView {
    Q_OBJECT

public:
    View(QGraphicsScene* new_scene);

    ~View()
    {
        delete timer;
        delete scene;
    }

public:
    double get_width();
    double get_height();

    void timerEvent(QTimerEvent * event);

    void keyPressEvent(QKeyEvent* event);
    void keyReleaseEvent(QKeyEvent *event);

public slots:
    void advance();

protected:
    QGraphicsScene* scene;
    QTimer* timer;

private:
//    QGraphicsView* view;

    double width;
    double height;

    Paddle* paddleLeft = new Paddle();

    Paddle* paddleRight = new Paddle();
    MovingBall* ball = new MovingBall();
};

#endif // VIEW_H
