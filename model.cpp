#include "model.h"

bool Model::running;
double Model::window_width;
double Model::window_height;

Model::Model()
{
    running = true;
    window_width = 200;
    window_height = 200;
}

void Model::set_game_state(bool new_game_state)
{
    running = new_game_state;
}

void Model::resize(double new_width, double new_height)
{
    set_width(new_width);
    set_height(new_height);
}

void Model::set_width(double new_width)
{
    window_width = new_width;
}

void Model::set_height(double new_height)
{
    window_height = new_height;
}

bool Model::get_game_state() const
{
    return running;
}

double Model::get_width() const
{
    return window_width;
}

double Model::get_height() const
{
    return window_height;
}
