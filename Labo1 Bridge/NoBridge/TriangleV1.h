#ifndef PasBridge_TriangleV1_h
#define PasBridge_TriangleV1_h
#include "Triangle.h"
#include "GeomGlut.h"
extern GeomGlut graphWin;

class TriangleV1 : public Triangle
{
public:
    TriangleV1(){}
    TriangleV1(double x1,double y1,double x2,double y2,double x3,double y3);
    ~TriangleV1(){}
protected:
    void drawLine(double x1,double y1,double x2,double y2);
};
#endif
