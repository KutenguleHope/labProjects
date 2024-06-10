#include <iostream>
#include <string>

using namespace std;

int main() {
    
    int* pInt = new int;
    
    
    string* pString = new string;
    
    
    cout << "Enter an integer value: ";
    cin >> *pInt;
    
    cout << "Enter a string: ";
    cin.ignore(); 
    getline(cin, *pString);
    
    
    cout << "The value of the dynamically allocated integer is: " << *pInt << endl;
    cout << "The value of the dynamically allocated string is: " << *pString << endl;
    
    
    delete pInt;
    delete pString;
    
    return 0;
}
