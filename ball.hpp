#ifndef BALL_HPP
#define BALL_HPP

#include "Point.hpp"

class Ball 
{
public:
	Ball();

	Ball(double speed = 0);

	void set_speed(int speed);

	void set_coordinates(int x, int y);

	void move

private:
	Point coordinates;
	double speed;
};

#endif // BALL_HPP