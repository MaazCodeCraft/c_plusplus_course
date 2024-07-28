#include <iostream>

using namespace std;

int main()
{
    int num;
    cout << "Enter a Number:  ";
    cin >> num;

    int factorial = 1;

    for (int i = 1; i <= num; i++)
    {
        factorial = factorial * i;
    }
        cout << "Factorial of " << num << "! is " << factorial;


    return 0;
}
