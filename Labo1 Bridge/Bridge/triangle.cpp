#include "Triangle.h"

Triangle::Triangle(double x,double y,double w):x(x),y(y),w(w)
{
    this->drawingStrategy=new V2Drawing();
}

void Triangle::draw()
{
    drawLine(x, y, x+w,y);
    drawLine(x, y, (x+w)/2, y+w);
    drawLine((x+w)/2, y+w, x+w, y);
}
