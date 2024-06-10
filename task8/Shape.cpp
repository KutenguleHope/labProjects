#ifndef SQUARE_H
#define SQUARE_H


namespace shapes
{
    class Square
    {
    private:
       double sideLength;

    public:
    Square();
    Square(double side);
   
   ~Square();

   void setSideLength(double side);
   double getSideLength() const;

    };
}
#endif

#ifndef TRIANGLE_H
#define TRINGLE_H

namespace shapes
{
 class Triangle
 {
    private:
    double base;
    double height;

    public:
    Triangle();//constructor
    Triangle(double h, double b);//overloaded constructor

    ~Triangle();// deconstructor
  
    //setters
    void setBase(double b);
    void setHeight(double h);
     
     //getters
     double getBase() const;
     double getHeight() const;



 };
}

#endif

#ifndef CIRCLE_H
#define CIRCLE_H

namespace shapes
{
    class Circle
    {
        private :
        double radius;

        public :
        Circle(double r);//overloaded constructor
        ~Circle();//deconstructor

        //setter
        void setRadius(double r);

        //getter
        double getRadius() const;



    };
}
#endif

#ifndef AREA_H
#define AREA_H
/*#include "Square.h"
#include "Circle_h"
#include "Triangle_h"*/


class Area
{
    public:
    static double CalculateArea(const shapes:: Square& square);
    static double CalculateArea(const shapes:: Circle& circle);
    static double CalculateArea(const shapes:: Triangle& triangle);

}
#endif
#include <iostream>
/*#include "Square.h"
#include "Circle.h"
#include "Triangle.h"
#include "Area.h"*/

using namespace shapes;
using namespace std;

int main()
{
    int choice;
    bool running = true;

    while(running)
    {
        cout << "choose an option:" << endl;
        cout << "1. Calculate the area of the circle: "<<endl;
        cout << "2. Calculate the area of the Square: "<<endl;
        cout << "3. Calculate the area of the Triangle: "<<endl;
        cout << "4. Quit" << endl;
        cin >> choice;

        switch(choice)
        {
            case 1:
                   {
                    double radius;
                    cout << "Enter the radius of the circle: ";
                    cin >> radius;
                    Circle circle(radius);
                    cout << "The area of the circle is "<< Area::CalculateArea(circle)<<endl;
                    break;
                   }

            case 2 :
                   {
                    double side;
                    cout << "Enter the side of the Square: ";
                    cin >> side;
                    Square square(side);
                    cout << "The area of the Square is "<<Area::CalculateArea(square)<<endl;
                    break;
                   }      
            case 3 :
                    {
                     double base, height;
                     cout << "Enter the base and height of the triangle: ";
                     cin >> base, height;
                     Triangle triangle(base,height);
                     cout << "The area of the Triangle is "<< Area::CalculateArea(triangle)<<endl;
                     break;
                    }  
            case 4 :
                    
                        running = false;
                        cout << "Exiting the program."<<endl;
                        break;
            default : 
                        cout << "invalid option.please try again. "<< endl;
                 
        }

    }
return 0;
}