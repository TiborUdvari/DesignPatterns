#ifndef PasBridge_RectangleV1_h
#define PasBridge_RectangleV1_h
#include "Rectangle.h"
#include "GeomGlut.h"
extern GeomGlut graphWin;

class RectangleV1 : public Rectangle
{
public:
    RectangleV1(){}
    RectangleV1(double x_,double y_,double w_,double h_);
    ~RectangleV1(){}
protected:
    void drawLine(double x1,double y1,double x2,double y2);
};


#endif
