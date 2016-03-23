#include "Point.hpp"

Point::Point()
:	x{0}, y{0}
{
}

Point::Point(int x, int y)
:	x{x}, y{y}
{
}

void Point::set_coordinates(int new_x, int new_y) {
	x = new_x;
	y = new_y;
}

int Point::x() const {
	return x;
}

int Point::y() const {
	return y;
}