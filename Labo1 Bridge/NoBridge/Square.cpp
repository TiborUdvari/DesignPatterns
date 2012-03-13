#include "Square.h"

Square::Square(double x,double y,double l):x(x),y(y),l(l)
{
}

void Square::draw()
{
    drawLine(x,y,x+l,y);
    drawLine(x,y,x,y-l);
    drawLine(x+l,y,x+l,y-l);
    drawLine(x,y-l,x+l,y-l);
}
