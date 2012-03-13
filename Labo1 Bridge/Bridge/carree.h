#ifndef Bridge_Carree_h
#define Bridge_Carree_h
#include "Shape.h"
#include "V2Drawing.h"

class Carree : public Shape
{
public:
    Carree(double x,double y,double w);
    void draw();
private:
    double x;
    double y;
    double w;
};

#endif
