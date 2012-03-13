#include "CircleV1.h"

CircleV1::CircleV1(double x_,double y_,double w_,double h_):Circle(x_,y_,w_,h_)
{

}
void CircleV1::drawCircle(double x1,double y1)
{

    graphWin.plot(x1,y1,4);
}

