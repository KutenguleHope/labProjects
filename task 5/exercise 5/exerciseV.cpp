#include <iostream>
#include <limits>
using namespace std;

// triangle area function
void calaculateTriangleArea()
{
float base, height;
cout << "Enter the base of the triangle: " ;
cin >>base;
cout << "Enter the height of the triangle: ";
cin >> height;
int area =  0.5 * base * height;
cout << "The area of the triangle is "<< area <<endl;
}

//square function area
void calculateSquareArea()
{
    float side;
    cout << "Enter the side  of the square: ";
    cin >> side;
    int area = side * side;
    cout << "The area of the square is "<< area <<endl;
}

//rectangle area function
void calculateRectangleArea()
{
    float length, width;
    cout << "Enter the length of the rectangle: ";
    cin >> length;
    cout << "Enter the width of the rectangle: ";
    cin >> width;
    int area = length * width;
cout << "The area of the rectangle is "<< area <<endl;
}

int main() 
{
    int choice;
    while (true)
    {
        cout << "Select a shape to calculate the area for: " << endl;
        cout << "1. Square " << endl;
        cout << "2. Rectangle "<< endl;
        cout << "3. Triangle " << endl;
        cout << "4. Quit" << endl;
        cout << "choice is: ";
        cin >> choice;

        if (cin.fail() || choice < 1 || choice > 4)
               {
                cout << "Your input was: "<< choice << " which is an invalid input "<<endl;
                cout << "Please enter a valid input!" << endl;

                cin.clear();
                cin.ignore (numeric_limits<streamsize>::max(),'\n');
                       
                   continue; 
               }
        else if (choice == 1)
        {
             calculateSquareArea(); 
        }
        else if(choice == 2)
        {
          calculateRectangleArea();  
        }
        else if ( choice == 3)
        {
          calaculateTriangleArea();  
        }
        else if ( choice == 4)
        {
            break;
        }
        else
        {
            cout<< "Invalid input. Please enter a valid choice (1, 2, 3, or 4)." << endl;
        
        }

    }
    return 0; 
}