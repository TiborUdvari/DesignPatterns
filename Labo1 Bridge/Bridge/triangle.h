#ifndef Bridge_Triangle_h
#define Bridge_Triangle_h
#include "Shape.h"
#include "V2Drawing.h"

class Triangle : public Shape
{
public:
    Triangle(double x,double y,double w);
    void draw();
private:
    double x;
    double y;
    double w;
};

#endif
