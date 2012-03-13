#include "TriangleV1.h"

TriangleV1::TriangleV1(double x1,double y1,double x2,double y2,double x3,double y3):Triangle(x1,y1,x2,y2,x3,y3)
{

}
void TriangleV1::drawLine(double x1,double y1,double x2,double y2)
{
    graphWin.segment(x1,y1,x2,y2);
}
