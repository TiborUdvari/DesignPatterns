#ifndef PasBridge_SquareV1_h
#define PasBridge_SquareV1_h
#include "Square.h"
#include "GeomGlut.h"
extern GeomGlut graphWin;

class SquareV1 : public Square
{
public:
    SquareV1(){}
    SquareV1(double x1,double y1,double l);
    ~SquareV1(){}
protected:
    void drawLine(double x1,double y1,double x2,double y2);
};

#endif
