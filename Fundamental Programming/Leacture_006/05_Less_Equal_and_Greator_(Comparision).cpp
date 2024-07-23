#include <iostream>

using namespace std;

int main()
{
    int num1;
    cout << "Enter num1:   ";
    cin >> num1;

    int num2;
    cout << "Enter num2:   ";
    cin >> num2;



    if (num1 > num2)
    {
        cout << num1 << " greater than " << num2;
    }else if (num1 < num2)
    {
        cout << num1 << " smaller than " << num2;
    }else
    {
        cout << num1 << " and " << num2 << " are equal.";
    }

    return 0;
}
