#ifndef Rectangle_h
#define Rectangle_h
#include "Polygon.h"

class Rectangle:public Polygon{
    public:
    Rectangle(int a, int b);
    int Area();
};


#endif