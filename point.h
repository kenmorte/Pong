#ifndef POINT_HPP
#define POINT_HPP

#include <iostream>
#include <string>

class Point
{
public:
    Point();

    Point(int x, int y);

    void set_x(int x);

    void set_y(int y);

    void set_coordinates(int x, int y);

    int get_x() const;

    int get_y() const;

    std::string str() const;

private:
    int x, y;
};


#endif // POINT_HPP
