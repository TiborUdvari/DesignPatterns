#ifndef Bridge_Rectangle_h
#define Bridge_Rectangle_h
#include "Shape.h"
class Rectangle : public Shape
{
public:
    Rectangle(){}
    Rectangle(double x,double y,double w,double h);
    void draw();
    ~Rectangle(){}
protected:
    virtual void drawLine(double x1,double y1,double x2,double y2)=0;
    double x;
    double y;
    double w;
    double h;
};

#endif
