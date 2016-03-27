#ifndef PONGOBJECT_H
#define PONGOBJECT_H

#include "point.h"
#include <random>

namespace Pong
{
    const double RADIUS = 10;
    const double SPEED = 10;
    const double ANGLE = rand();

    const double WINDOW_WIDTH = 200;
    const double WINDOW_HEIGHT = 200;

    const double PADDLE_WIDTH = 10;
    const double PADDLE_HEIGHT = 50;
    const double PADDLE_SPEED = 10;
}

class PongObject
{
public:
    PongObject();

    PongObject(int x, int y, double width, double height);

    PongObject(Point coords, double width, double height);

    void set_coordinates(Point coords);

    void set_coordinates(int x, int y);

    void set_width(double new_width);

    void set_height(double new_height);

    Point get_coordinates() const;

    double get_width() const;

    double get_height() const;

private:
    Point coordinates;
    double width;
    double height;
};

#endif // PONGOBJECT_H
