#include "pongobject.h"

PongObject::PongObject()
    :coordinates(Point(0,0)), width(0), height(0)
{
}

PongObject::PongObject(int x, int y, double new_width, double new_height)
    :coordinates(Point(x,y)), width(new_width), height(new_height)
{
}

PongObject::PongObject(Point coords, double new_width, double new_height)
    :coordinates(coords), width(new_width), height(new_height)
{
}

void PongObject::set_coordinates(Point coords) {
    coordinates = coords;
}

void PongObject::set_coordinates(int x, int y) {
    coordinates = Point(x,y);
}

void PongObject::set_width(double new_width) {
    width = new_width;
}

void PongObject::set_height(double new_height) {
    height = new_height;
}

Point PongObject::get_coordinates() const {
    return coordinates;
}

double PongObject::get_width() const {
    return width;
}

double PongObject::get_height() const {
    return height;
}
