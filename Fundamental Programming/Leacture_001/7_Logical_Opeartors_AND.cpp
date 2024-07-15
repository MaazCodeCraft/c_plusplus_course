#include <iostream>
using namespace std;
int main ()
{
    //Logic Operators
    // || &&

    int num1;
    int num2;
    int num3;
    int num4;

    cout << " Please enter 1st number"<< endl;
    cin >> num1;

    cout << " Please enter 2nd number"<< endl;
    cin >> num2;

    cout << " Please enter 3rd number"<< endl;
    cin >> num3;

    cout << " Please enter 4th number"<< endl;
    cin >> num4;

    if (num1>num2 && num1>num3 && num1>num4) {
    cout << "first Number is the greatest ";
    }

    else if (num2>num1 && num2>num3 && num2> num4) {
    cout << "second number is the greatest ";
    }

    else if (num3>num1 && num3>num2 && num3> num4) {
    cout << "Third number is the greatest ";
    }

    else {
    cout << "Fourth number is the greatest ";

    }
    return 0;
}
