//#include "pongball.h"
//#include <QTimer>
//#include <QObject>

//PongBall::PongBall()
//    : coordinates( Point() ), radius(Pong::RADIUS), speed(Pong::SPEED), angle(Pong::ANGLE)
//{
//    set_shape();
//    QTimer* timer = new QTimer();
//    connect(timer, SIGNAL(timeout()), this, SLOT(move()));
//    timer->start(50);
//}

//PongBall::PongBall(int x, int y, double new_speed, double new_angle, double new_radius)
//    : coordinates(Point(x,y)), speed(new_speed), angle(new_angle), radius(new_radius)
//{
//    set_shape();
//    QTimer* timer = new QTimer();
//    connect(timer, SIGNAL(timeout()), this, SLOT(move()));
//    timer->start(50);
//}

//PongBall::PongBall(Point coords, double new_speed, double new_angle, double new_radius)
//    : coordinates(coords), speed(new_speed), angle(new_angle), radius(new_radius)
//{
//    set_shape();
//    QTimer* timer = new QTimer();
//    connect(timer, SIGNAL(timeout()), this, SLOT(move()));
//    timer->start(50);
//}

//void PongBall::set_shape() {
//    this->setRect(coordinates.get_x(), coordinates.get_y(), radius*2, radius*2);
//}

//void PongBall::move()
//{
////    change_location(coordinates.get_x(), coordinates.get_y());
//    set_shape();
//    setPos(coordinates.get_x(), coordinates.get_y());
////    wall_bounce();
//}
