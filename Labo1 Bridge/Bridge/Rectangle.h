#ifndef Bridge_Rectangle_h
#define Bridge_Rectangle_h
#include "Shape.h"
#include "V2Drawing.h"

class Rectangle : public Shape
{
public:
    Rectangle(double x,double y,double w,double h);
    void draw();
private:
    double x;
    double y;
    double w;
    double h;
};

#endif
