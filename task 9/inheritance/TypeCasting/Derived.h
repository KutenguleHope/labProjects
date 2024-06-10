#ifndef Derived_h
#define Derived_h
#include "Base.h"

class Derived:public Base {
   public:
    Derived();

    private:
    int a;
};
#endif