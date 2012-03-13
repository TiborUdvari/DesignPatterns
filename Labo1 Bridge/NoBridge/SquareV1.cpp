#include "SquareV1.h"

SquareV1::SquareV1(double x1,double y1,double l):Square(x1,y1,l)
{

}
void SquareV1::drawLine(double x1,double y1,double x2,double y2)
{

    graphWin.segment(x1,y1,x2,y2);
}

