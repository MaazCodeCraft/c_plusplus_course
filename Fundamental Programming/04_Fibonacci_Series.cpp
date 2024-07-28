#include <iostream>

using namespace std;

int main()
{
    int num;
    cout << "Enter a Number:  ";
    cin >> num;

    int num1 = 0;
    int num2 = 1;
    int num3;

    for (int i = 1; i < num; i++)
    {
        cout << num1 << " ";
        num3 = num1 + num2;
        num1 = num2;
        num2 = num3;

    }


    return 0;
}
