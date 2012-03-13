#ifndef Bridge_Circle_h
#define Bridge_Circle_h
#include <cmath>
#include "Shape.h"
#include "V1Drawing.h"
#include "V2Drawing.h"

const double PI=3.14;

class Circle : public Shape
{
public:
    Circle(double x, double y,double rayon,double nbreDePoint);
    void draw();
private:
    double rayon;
    double x;
    double y;
    double nbreDePoint;//résolution
};

#endif
