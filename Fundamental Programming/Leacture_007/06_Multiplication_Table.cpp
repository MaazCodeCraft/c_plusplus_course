#include <iostream>

using namespace std;

int main()
{
   int table;
   cout << "Enter a Number:  ";
   cin >> table;

   for (int i = 1; i <= 10; i++)
   {
       cout << table << " x " << i << " = " << table * i << endl;
   }


    return 0;
}
