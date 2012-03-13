#ifndef Bridge_V2Drawing_h
#define Bridge_V2Drawing_h
#include "AbstractDrawingStrategy.h"
#include "GeomGlut.h"
extern GeomGlut graphWin;

class V2Drawing : public AbstractDrawingStrategy
{
public:
    void drawLine(double x1,double y1,double x2,double y2);
    void drawCircle(float x,float y);
};

#endif
