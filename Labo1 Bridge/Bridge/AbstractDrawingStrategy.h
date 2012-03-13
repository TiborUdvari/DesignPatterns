#ifndef Bridge_AbstractDrawingStrategy_h
#define Bridge_AbstractDrawingStrategy_h
#include <iostream>

class AbstractDrawingStrategy
{
public:
    virtual void drawLine(double x1,double y1,double x2,double y2)=0;
    virtual void  drawCircle(float x,float y)=0;
};

#endif
