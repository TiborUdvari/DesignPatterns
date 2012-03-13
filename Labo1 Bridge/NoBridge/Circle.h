#ifndef Bridge_Circle_h
#define Bridge_Circle_h
#include <cmath>
#include "Shape.h"

const double PI=3.14;
class Circle : public Shape
{
public:
    Circle(){}
    Circle(double x, double y,double rayon,double nbreDePoint);
    void draw();
    ~Circle(){}
protected:
    virtual void drawCircle(double x1,double y1)=0;
    double rayon;
    double x;
    double y;
    double nbreDePoint;//résolution
};



#endif
