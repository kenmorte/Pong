#ifndef MOVINGBALL_H
#define MOVINGBALL_H

#include "ball.h"
#include "model.h"


class MovingBall: public QObject, public Ball
{
    Q_OBJECT
public:
    MovingBall();

    MovingBall(int x, int y, double new_speed = Pong::SPEED, double new_angle = Pong::ANGLE, double new_radius = Pong::RADIUS);

    MovingBall(Point coords, double new_speed = Pong::SPEED, double new_angle = Pong::ANGLE, double new_radius = Pong::RADIUS);

    void set_coordinates(Point coords);

    void set_coordinates(int x, int y);

    void set_speed(double new_speed);

    void set_angle(double new_angle);

    double get_angle() const;

    double get_speed() const;

    std::string str() const;

public slots:
    void move();

private:
    void change_location(int x, int y);

    void bounce(double barrier_angle);

    void wall_bounce();

private:
    Point coordinates;
    double speed;
    double angle;
    double radius;

};

#endif // MOVINGBALL_H
