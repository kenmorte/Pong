#ifndef MODEL_H
#define MODEL_H

#include "pongobject.h"
#include "ball.h"



class Model
{
public:
    Model();

    static void set_game_state(bool new_game_state);

    static void resize(double new_width, double new_height);

    static void set_width(double new_width);

    static void set_height(double new_height);

    bool get_game_state() const;

    double get_width() const;

    double get_height() const;

private:
    static bool running;
    static double window_width;
    static double window_height;
};

#endif // MODEL_H
