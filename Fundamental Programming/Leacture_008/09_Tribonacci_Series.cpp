#include <iostream>

using namespace std;

int main()
{

    int num;
    cout << "Please Enter a number:  ";
    cin >> num;

    int num1 = 0;
    int num2 = 1;
    int num3 = 2;
    int num4;

    for (int i = 0; i < num; i++)
    {
        cout << num1 << " ";
        num4 = num1+num2+num3;
        num1 = num2;
        num2 = num3;
        num3 = num4;
    }

    return 0;
}
