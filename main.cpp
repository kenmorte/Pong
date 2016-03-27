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
#include "view.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Model model;

    // create a scene
    QGraphicsScene* scene = new QGraphicsScene();

    // create an item to put into scene
    MovingBall* ball = new MovingBall(model.get_width()/2, model.get_height()/2);

    // make rect focusable

    // add item to scene
    scene->addItem(ball);


    View* view = new View(scene);
    view->show();

//    MainWindow w;
//    w.setCentralWidget(view);
//    w.setFixedSize(model.get_width(), model.get_height());
//    w.show();



    return a.exec();
}
