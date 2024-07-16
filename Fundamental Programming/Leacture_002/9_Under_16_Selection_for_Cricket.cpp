#include <iostream>

using namespace std;

int main()
{
   int age;
   cout << "Please enter your age \n";
   cin >> age;

   if (age>12 & age<16){
   cout << "Congratulation you are eligible for the selection";
   } else {
   cout << "Sorry you are not eligible for this selection";
   }

    return 0;
}
