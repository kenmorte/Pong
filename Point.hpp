#ifndef POINT_HPP
#define POINT_HPP

class Point
{
public:
	Point();

	Point(int x, int y);

	void set_coordinates(int x, int y);

	int x() const;

	int y() const;

private:
	int x, y;
};


#endif // POINT_HPP