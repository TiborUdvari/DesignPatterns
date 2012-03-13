#include "V1Drawing.h"

V1Drawing::V1Drawing()
{

}
void V1Drawing::drawLine(double x1,double y1,double x2,double y2)
{

}
void V1Drawing::drawCircle(float x,float y)
{
    graphWin.plot(x, y,4);
}
