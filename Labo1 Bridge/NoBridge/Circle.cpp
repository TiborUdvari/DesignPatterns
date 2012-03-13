#include "Circle.h"

Circle::Circle(double x,double y,double rayon,double nbreDePoint):rayon(rayon),x(x),y(y),nbreDePoint(nbreDePoint)
{
}
void Circle::draw()
{
    double deltaAngle=360.0/nbreDePoint;
    for(double angle=0.0;angle<360.0;angle+=deltaAngle)
    {
        double xPos=x+rayon*cos(angle*PI/180.0);
        double yPos=y+rayon*sin(angle*PI/180.0);
        drawCircle(xPos, yPos);
    }
}
