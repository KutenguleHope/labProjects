#include <iostream>
#include <vector>
using namespace std;

int main()
 {
vector<string> myArray = {"B123", "C234","A345","C15", "B177", "G3003," "C235", "B179"};
        
      for (const string& element : myArray)
      {
        if(element[0] == 'B')
        {
            cout << "ELement starting with  'B': "<< element << endl;
        }
      }
    return 0;
}