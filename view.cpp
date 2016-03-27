#include "view.h"
#include <QTimer>
#include <QGraphicsScene>
#include <QDebug>
#include "movingball.h"
#include <QKeyEvent>



View::View(QGraphicsScene* new_scene)
    :scene(new_scene), width(Pong::WINDOW_WIDTH), height(Pong::WINDOW_HEIGHT)
{
    scene->addItem(paddleLeft);
    paddleLeft->setFlag(QGraphicsItem::ItemIsFocusable);
    paddleLeft->setFocus();

    this->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    this->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    this->setScene(scene);
    this->setSceneRect(0,0,Pong::WINDOW_WIDTH,Pong::WINDOW_HEIGHT);

    this->setGeometry(0, 0, width, height);
    this->setFixedSize(width, height);

    timer = new QTimer();
    this->connect(timer, SIGNAL(timeout()), this, SLOT(advance()));
    timer->start(1000);
    timer->setInterval(100);
}

double View::get_width()
{
    return width;
}

double View::get_height()
{
    return height;
}

void View::timerEvent(QTimerEvent *event) {
}

void View::keyPressEvent(QKeyEvent *event)
{
    if (event->key() == Qt::Key_Down)
        paddleLeft->set_moving_down(true);
    else if (event->key() == Qt::Key_Up)
        paddleLeft->set_moving_up(true);
}

void View::keyReleaseEvent(QKeyEvent *event)
{
    if (event->key() == Qt::Key_Down)
        paddleLeft->set_moving_down(false);
    else if (event->key() == Qt::Key_Up)
        paddleLeft->set_moving_up(false);
}

void View::advance() {
    paddleLeft->timerEvent();
    scene->update();
}
