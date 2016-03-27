#ifndef BALL_HPP
#define BALL_HPP

#include <string>
#include <QGraphicsEllipseItem>
#include "point.h"
#include "pongobject.h"

class Ball: public PongObject, public QGraphicsEllipseItem
{
public:
    Ball();

    Ball(int x, int y, double new_radius = Pong::RADIUS);

    Ball(Point coords, double new_radius = Pong::RADIUS);

    void set_shape();

    void set_radius(double new_radius);

    double get_radius() const;

    std::string str() const;

private:
    Point coordinates;
    double radius;
};

#endif // BALL_HPP
