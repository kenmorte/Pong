#ifndef BALL_HPP
#define BALL_HPP

#include <string>
#include <QGraphicsEllipseItem>
#include "point.h"
#include "pongobject.h"

//# Mobile_Simultons have angles (in radians) and speeds
//#   (in pixels/update); they inherit locations and
//#   dimensions (and methods) from Simulton.
//# These are initialized in __init__ and can be
//#    queried and set using methods.
//# Three useful methods help mobile simultons move on their
//#   canvas, by updating their location and changing their
//#   angle (bouncing) if they hit a wall.


//# The angle unit is radians. If you are unfamiliar with this
//# unit, examine the diagram below in which all units are in radians.
//#
//#                   pi/2
//#                     |
//#                     |
//#                     |
//#                     |
//#                     |
//# pi (or -pi) --------+-------- 0 (or 2pi)
//#                     |
//#                     |
//#                     |
//#                     |
//#                     |
//#                  3pi/2 (or -pi/2)

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
