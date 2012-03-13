#ifndef Bridge_Triangle_h
#define Bridge_Triangle_h
#include "Shape.h"
class Triangle : public Shape
{
public:
    Triangle(){}
    Triangle(double x1,double y1,double x2,double y2,double x3,double y3);
    void draw();
    ~Triangle(){}
protected:
    virtual void drawLine(double x1,double y1,double x2,double y2)=0;
    double x1;
    double y1;
    double x2;
    double y2;
    double x3;
    double y3;
};
#endif
