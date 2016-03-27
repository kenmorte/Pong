#include "paddle.h"
#include <QKeyEvent>

bool Paddle::left_created = false;

Paddle::Paddle()
    :coordinates( create_point() ), width(Pong::PADDLE_WIDTH), height(Pong::PADDLE_HEIGHT)
{
    this->setRect(coordinates.get_x(), coordinates.get_y(), width, height);
}

void Paddle::timerEvent()
{
    if (is_moving_down)
        move_down();

    if (is_moving_up)
        move_up();
}

void Paddle::move_down()
{
    const double bottom_y = coordinates.get_y() + height;
    if (bottom_y + Pong::PADDLE_SPEED <= window_height) {
        coordinates.set_y(coordinates.get_y() + Pong::PADDLE_SPEED);
        setPos( coordinates.get_x(), coordinates.get_y() );
    }

}

void Paddle::move_up()
{
    const double top_y = coordinates.get_y();
    if (top_y - Pong::PADDLE_SPEED >= 0) {
        coordinates.set_y(coordinates.get_y() - Pong::PADDLE_SPEED);
        setPos( coordinates.get_x(), coordinates.get_y() );
    }
}

void Paddle::set_moving_down(bool moving_down)
{
    is_moving_down = moving_down;
}

void Paddle::set_moving_up(bool moving_up)
{
    is_moving_up = moving_up;
}

void Paddle::resize(int new_width, int new_height)
{

}

Point Paddle::create_point() {
    const double place_frac = ( (double) 8 ) / 9;

    if (!left_created) {
        left_created = true;
        return Point (place_frac*window_width , window_height /  2 );
    }

    return Point ( (1-place_frac)*window_width , window_height / 2 );
}
