#include <iostream>
#include "Rectangle.h"
#include "Triangle.h"
using namespace std;

int main (){
   
    Polygon* pPoly1 = new Rectangle(4,5);
    Polygon* pPoly2 = new Triangle(4,5);
  

   pPoly1->SetValues(4,5);
   pPoly2->SetValues(4,5);
 

delete pPoly1;
delete pPoly2;
    
    return 0;
}
