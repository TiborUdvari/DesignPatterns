#include "Rectangle.h"

Rectangle::Rectangle(double x,double y,double w,double h):x(x),y(y),w(w),h(h)
{
}

void Rectangle::draw()
{
    drawLine(x, y, x+w, y);
    drawLine(x+w, y, x+w, y+h);
    drawLine(x+w, y+h, x, y+h);
    drawLine(x, y+h, x, y);
}
