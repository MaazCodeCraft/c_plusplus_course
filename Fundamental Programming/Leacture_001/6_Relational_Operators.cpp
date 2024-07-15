#include <iostream>

using namespace std;

int main()
{
  // Comparison Operators
	// > < >= <= == !=

   int num1;
   int num2;

   cout << " Please enter 1st number" << endl;
   cin >> num1;

   cout << " please enter 2nd number" << endl;
   cin >> num2;

   if (num1 < num2) {
    cout << num1 << " is smaller than " << num2 << endl;
}

    if (num1 == num2) {
    cout << num1 << " is equal to " << num2 << endl;
    }

    else {
    cout << num1 << " is greater than " << num2 << endl;
    }


   return 0;
}
