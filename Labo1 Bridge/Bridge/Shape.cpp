#include "Shape.h"

Shape::~Shape()
{
    delete drawingStrategy;
}

void Shape::drawLine(double x1,double y1,double x2,double y2)
{
    drawingStrategy->drawLine(x1,y1,x2,y2);
}
void Shape::drawCircle(float x,float y)
{
    drawingStrategy->drawCircle(x,y);
}
