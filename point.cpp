#include <string>
#include <sstream>
#include "point.h"

Point::Point()
:	x{0}, y{0}
{
}

Point::Point(int x, int y)
:	x{x}, y{y}
{
}

void Point::set_x(int new_x)
{
    x = new_x;
}

void Point::set_y(int new_y)
{
    y = new_y;
}

std::string Point::str() const {
    std::ostringstream result;
    result << "Point(" << x << "," << y << ")";
    return result.str();
}

void Point::set_coordinates(int new_x, int new_y) {
    x = new_x;
    y = new_y;
}

int Point::get_x() const {
    return x;
}

int Point::get_y() const {
    return y;
}
