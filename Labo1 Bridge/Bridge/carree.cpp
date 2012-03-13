#include "Carree.h"

Carree::Carree(double x,double y,double w):x(x),y(y),w(w)
{
    this->drawingStrategy=new V2Drawing();
}

void Carree::draw()
{
    drawLine(x, y, x+w,y);
    drawLine(x, y, x, y+w);
    drawLine(x+w, y, x+w, y+w);
    drawLine(x+w, y+w, x, y+w);
}
