#include <iostream>
#include <limits>
 using namespace std;

int main()
{
int value;
cout  << "enter a value between 5 and 10: "<< endl;

while(true)
{
    cin >> value;
if (cin.fail() )
{
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "sorry you entered an invalid number please try again: ";
}
else  if(value < 5 || value > 10)
   {
    cout << "You entered " << value << ". Please enter a number between 5 and 10: ";
   }
   else 
       break;
}

cout << "Your input value(" << value << ") has been accepted";
    return 0;
}