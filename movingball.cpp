#include "movingball.h"
#include "model.h"
#include <math.h>
#include <sstream>
#include <QTimer>

MovingBall::MovingBall()
   : coordinates( Point() ), radius(Pong::RADIUS), speed(Pong::SPEED), angle(Pong::ANGLE)
{
    QTimer* timer = new QTimer();
    connect(timer, SIGNAL(timeout()), this, SLOT(move()));

    timer->start(50);
}

MovingBall::MovingBall(int x, int y, double new_speed, double new_angle, double new_radius)
:   coordinates(Point(x,y)), speed(new_speed), angle(new_angle), radius(new_radius)
{
    set_shape();
    QTimer* timer = new QTimer();
    connect(timer, SIGNAL(timeout()), this, SLOT(move()));

    timer->start(50);
}

MovingBall::MovingBall(Point coords, double new_speed, double new_angle, double new_radius)
:   coordinates(coords), speed(new_speed), angle(new_angle), radius(new_radius)
{
    set_shape();
    QTimer* timer = new QTimer();
    connect(timer, SIGNAL(timeout()), this, SLOT(move()));

    timer->start(50);
}

void MovingBall::set_coordinates(Point coords) {
    coordinates.set_coordinates( coords.get_x(), coords.get_y() );
    set_shape();
}

void MovingBall::set_coordinates(int x, int y) {
    coordinates.set_coordinates(x, y);
    set_shape();
}

void MovingBall::set_speed(double new_speed) {
    speed = new_speed;
}

void MovingBall::set_angle(double new_angle) {
    angle = new_angle;
}

double MovingBall::get_speed() const {
    return speed;
}

double MovingBall::get_angle() const {
    return angle;
}

void MovingBall::move() {
    change_location(coordinates.get_x(), coordinates.get_y());
    wall_bounce();
}

void MovingBall::change_location(int x, int y) {
    set_coordinates (x + (speed * cos(angle)),
                     y + (speed * sin(angle)));
    setPos(coordinates.get_x(), coordinates.get_y());
}

void MovingBall::bounce(double barrier_angle) {
    set_angle(2*barrier_angle - angle);
}

void MovingBall::wall_bounce()
{
    const int x = coordinates.get_x(),      y = coordinates.get_y();

    const int w = radius*2,                 h = radius*2;

    const int mw = Model().get_width(),     mh = Model().get_height();

    const int left_x = x,                   right_x = x + w;
    const int top_y = y,                    bottom_y = y + h;

    const double vel_x = cos(angle) * speed,
            vel_y = sin(angle) * speed;

    if (left_x <= 0 && vel_x < 0) {
        bounce(M_PI/2);
    } else if (right_x >= mw && vel_x > 0) {
        bounce(M_PI/2);
    } else if (top_y < 0 && vel_y < 0) {
        bounce(0);
    } else if (bottom_y >= mh && vel_y > 0) {
        bounce(0);
    }
}



// Debugging methods
std::string MovingBall::str() const {
    std::ostringstream result;
    result << "MovingBall(" <<
              "coordinates=" << coordinates.str() <<
              ",speed=" << speed <<
              ",angle=" << angle <<
              ",radius=" << radius <<
              ")";
    return result.str();
}
