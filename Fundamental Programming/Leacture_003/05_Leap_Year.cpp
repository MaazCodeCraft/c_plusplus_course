#include <iostream>

using namespace std;

int main()
{
   int year;
   cout << "please enter year \n";
   cin >> year;

   if (year % 4 == 0) {
   cout << "This is leap year";
   } else {
   cout << "This is not leap year";
   }

    return 0;
}
