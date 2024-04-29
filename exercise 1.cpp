#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int main()
{
 srand(static_cast<unsigned int>(time(0)));
int daysUntilExpiration = rand() % 12;
   
     if (daysUntilExpiration > 10)
            {
            cout << " You have an active subscription" << endl;
            }     
             
     else 
          if (daysUntilExpiration > 5)
            {
              cout << "Your subscription expires soon. Renew now! " << endl;
            }

      else 
         if (daysUntilExpiration > 1)
           {
            cout << "Your subscription expires in "<< daysUntilExpiration << " days Renew now!" << endl;
           }

     else 
          if (daysUntilExpiration = 1) 
          {
            cout << "Your subscription  expires within a day! Renew now and save 20% " << endl;
          }

     else 
          if (daysUntilExpiration = 0)
          {
            cout << " Your subscription has expired" <<endl;
          }       
   
return 0;
}