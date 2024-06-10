#ifndef Triangle_h
#define Triangle_h
#include "Polygon.h"
class Triangle:public Polygon{
    public:
    Triangle(int a, int b);
     int Area();
};
#endif