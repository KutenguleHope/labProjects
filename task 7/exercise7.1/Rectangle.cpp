

#ifndef RECTANGLE_H
#define RECTANGLE_H 

#include <iostream>
using namespace std;

class Rectangle
{
private:

   float  length;
   float  width;

   public :
     Rectangle();
     Rectangle(float l, float w);
    
    ~Rectangle();

    void setLength(float l);
    void setWidth(float w);

    float getLength() const;
    float getwidth() const;

    float area() const;

 };
#endif

// #include "Rectangle.h"

Rectangle::Rectangle() : length(0), width(0) {}
Rectangle::Rectangle(float l, float w) : length(1), width(w) {}

//Deconstructor
Rectangle:: ~Rectangle() {}

//setters
void Rectangle::setLength(float l) 
{
    length = l;
}
void Rectangle::setWidth(float w)
{
    width = w;
}

//getters
float Rectangle::getLength() const
{
    return length;
}

float Rectangle:: getwidth() const
{
    return width;
}

float Rectangle::area()const 
{
    return length * width;
}


#include <iostream>
using namespace std;

int main()
{
    //1st instance using default constr
    Rectangle rect1;
    float  length1, width1;

cout << "Enter the length of the first Rectangle: ";
cin >> length1;

cout << "Enter the width  of the first Rectangle: ";
cin >> width1;

rect1.setLength(length1);
rect1.setWidth(width1);

cout << "The area of the first Rectangle is " << rect1.area() << endl;

Rectangle rect2;
float length2, width2;

cout << "Enter the length of the second Rectangle: ";
cin >> length2;

cout << "Enter the width of the second Rectangle: ";
cin >> width2;

rect2.setLength(length2);
rect2.setWidth(width2);

cout << "the area of the second rectangle is "<< rect2.area() << endl;

  return 0;  
}