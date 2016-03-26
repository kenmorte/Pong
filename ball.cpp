#include <iostream>
#include <sstream>
#include "ball.h"
#include "point.h"

Ball::Ball()
:   coordinates( Point() ), radius(Pong::RADIUS)
{
    set_shape();
}

Ball::Ball(int x, int y, double new_radius)
:   coordinates(Point(x,y)), radius(new_radius)
{
    set_shape();
}

Ball::Ball(Point coords, double new_radius)
:   coordinates(coords), radius(new_radius)
{
    set_shape();
}

void Ball::set_shape() {
    this->setRect(coordinates.get_x(), coordinates.get_y(), radius*2, radius*2);
}

void Ball::set_radius(double new_radius) {
    radius = new_radius;
    set_shape();
}

double Ball::get_radius() const {
    return radius;
}

std::string Ball::str() const {
    std::ostringstream result;
    result << "Ball(" <<
              "coordinates=" << coordinates.str() <<
              ",radius=" << radius <<
              ")";
    return result.str();
}
