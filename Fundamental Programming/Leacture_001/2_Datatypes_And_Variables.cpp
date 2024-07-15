#include <iostream>

using namespace std;

int main()
{
    // Data Types
    
 /*   int a = 10;
    cout << a << endl;

    char ch = 'm';
    cout << ch << endl;

    float f = 10.4;
    cout << f << endl;

    double d = 100.383;
    cout << d << endl;

    bool bl = true;
    cout << bl << endl;

    int size = sizeof (d);
    cout << "Size of d is:  " << size << endl; */


    // Variables 
    
    int num1 = 200;
    int num2 = 100;
    int num3 = 10;
    int result = num1 * num2 * num3;

    result = num1 - num2;//100
    num2 = num1; //200
    num2 = num3; //10
    num3++; //11
    result = num1 * num3; //2200
    int num4 = 2;


    cout << "sub of " << num4 << " and " << num3 << " is " << "\n" << result;

    return 0;
}
