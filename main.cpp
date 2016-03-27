#include "mainwindow.h"
#include <QApplication>
#include <QGraphicsEllipseItem>
#include <QGraphicsView>
#include <QGraphicsScene>

#include <iostream>
#include "point.h"
#include "movingball.h"
#include "model.h"
#include "paddle.h"

typedef QGraphicsView View;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Model model;

    // create a scene
    QGraphicsScene* scene = new QGraphicsScene();

    // create an item to put into scene
    MovingBall* ball = new MovingBall(model.get_width()/2, model.get_height()/2);
    Paddle* paddleLeft = new Paddle();

    // make rect focusable
    paddleLeft->setFlag(QGraphicsItem::ItemIsFocusable);
    paddleLeft->setFocus();

    // add item to scene
    scene->addItem(ball);
    scene->addItem(paddleLeft);


    View* view = new View(scene);

    view->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->setSceneRect(0,0,model.get_width(),model.get_height());
    view->show();

//    MainWindow w;
//    w.setCentralWidget(view);
//    w.setFixedSize(model.get_width(), model.get_height());
//    w.show();



    return a.exec();
}
