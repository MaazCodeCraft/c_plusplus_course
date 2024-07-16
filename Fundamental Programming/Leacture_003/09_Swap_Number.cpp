#include <iostream>

using namespace std;

int main()
{
    int num1;
    cout << "Please Enter 1st Number:  ";
    cin >> num1;

    int num2;
    cout << "Please Enter 1st Number:  ";
    cin >> num2;

    int temp = 0;


        temp = num1;
        num1 = num2;
        num2 = temp;

    cout << "After Swamping:  " << num1 << "  " << num2;;

    return 0;
}
