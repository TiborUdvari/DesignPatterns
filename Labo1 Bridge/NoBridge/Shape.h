#ifndef Bridge_Shape_h
#define Bridge_Shape_h
#include <iostream>
class Shape
{
public:
    virtual void draw()=0;
    virtual ~Shape(){}
};

#endif
