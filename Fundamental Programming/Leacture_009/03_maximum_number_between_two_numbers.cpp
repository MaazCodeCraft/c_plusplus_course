#include <iostream>

using namespace std;

int main()
{
   // maximum number between two numbers

    int num1;
    cout << "Enter 1st Number:  ";
    cin >> num1;

    int num2;
    cout << "Enter 1st Number:  ";
    cin >> num2;

    cout << "Maximum Number is:  ";

   if (num1 < num2)
   {
       cout << num1;
   } else
   {
       cout << num2;
   }



    return 0;
}
