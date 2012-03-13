#include "Triangle.h"

Triangle::Triangle(double x1,double y1,double x2,double y2,double x3,double y3):x1(x1),y1(y1),x2(x2),y2(y2),x3(x3),y3(y3)
{
}

void Triangle::draw()
{
    drawLine(x1,y1,x2,y2);
    drawLine(x1,y1,x3,y3);
    drawLine(x2,y2,x3,y3);
}
