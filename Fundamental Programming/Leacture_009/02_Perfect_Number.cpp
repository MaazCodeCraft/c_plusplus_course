#include <iostream>

using namespace std;

int main()
{
//    Perfect NUmber
    int num;
    cout << "Please Enter a Number: ";
    cin >> num;

    int sum = 0;

    for (int i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            sum = sum + i;
        }
    }

    if (sum == num)
    {
        cout << "Perfect Number." ;
    }
    else
    {
        cout << "Not Perfect Number.";
    }

    return 0;
}
