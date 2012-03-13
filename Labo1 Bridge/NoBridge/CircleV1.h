#ifndef PasBridge_CircleV1_h
#define PasBridge_CircleV1_h
#include "Circle.h"
#include "GeomGlut.h"
extern GeomGlut graphWin;

class CircleV1 : public Circle
{
public:
    CircleV1(){}
    CircleV1(double x_,double y_,double rayon,double nbreDePoint);
    ~CircleV1(){}
protected:
    void drawCircle(double x1,double y1);
};

#endif
