#ifndef PADDLE_H
#define PADDLE_H

#include "QGraphicsRectItem"
#include "pongobject.h"

class Paddle: public PongObject, public QGraphicsRectItem
{
public:
    Paddle();
};

#endif // PADDLE_H
