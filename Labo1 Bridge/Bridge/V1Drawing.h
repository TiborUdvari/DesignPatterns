#ifndef Bridge_V1Drawing_h
#define Bridge_V1Drawing_h
#include "AbstractDrawingStrategy.h"
#include "GeomGlut.h"
extern GeomGlut graphWin;

class V1Drawing : public AbstractDrawingStrategy
{
public:
    V1Drawing();
    void drawLine(double x1,double y1,double x2,double y2);
    void drawCircle(float x,float y);
};

#endif
