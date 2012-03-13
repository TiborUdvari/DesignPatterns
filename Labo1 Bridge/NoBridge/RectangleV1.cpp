#include "RectangleV1.h"

RectangleV1::RectangleV1(double x_,double y_,double w_,double h_):Rectangle(x_,y_,w_,h_)
{

}
void RectangleV1::drawLine(double x1,double y1,double x2,double y2)
{

    graphWin.segment(x1,y1,x2,y2);
}
