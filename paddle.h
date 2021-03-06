#ifndef PADDLE_H
#define PADDLE_H

#include "QGraphicsRectItem"
#include "pongobject.h"

class Paddle: public PongObject, public QGraphicsRectItem
{
public:
    Paddle();

    void timerEvent();

    void move_down();

    void move_up();

    void set_moving_down(bool moving_down);

    void set_moving_up(bool moving_up);

    void resize(int new_width, int new_height);

private:
    Point create_point();

private:
    Point coordinates;
    double width;
    double height;

    double window_width = Pong::WINDOW_WIDTH;
    double window_height = Pong::WINDOW_HEIGHT;

    static bool left_created;

    bool is_moving_down = false;
    bool is_moving_up = false;
};

#endif // PADDLE_H
