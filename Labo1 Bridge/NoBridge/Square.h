#ifndef Bridge_Square_h
#define Bridge_Square_h
#include "Shape.h"
class Square : public Shape
{
public:
    Square(){}
    Square(double x,double y,double l);
    void draw();
    ~Square(){}
protected:
    virtual void drawLine(double x1,double y1,double x2, double y2)=0;
    double x;
    double y;
    double l;
};

#endif
