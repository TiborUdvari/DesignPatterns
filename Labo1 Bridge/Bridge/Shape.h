#ifndef Bridge_Shape_h
#define Bridge_Shape_h
#include <iostream>
#include "AbstractDrawingStrategy.h"

class Shape
{
public:
    virtual void draw()=0;
    virtual ~Shape();
protected:
    virtual void drawLine(double x1,double y1,double x2,double y2);
    virtual void drawCircle(float x,float y);

protected:
    AbstractDrawingStrategy* drawingStrategy;
};

#endif
