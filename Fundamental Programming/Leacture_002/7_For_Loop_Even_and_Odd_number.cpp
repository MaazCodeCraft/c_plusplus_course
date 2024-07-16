#include <iostream>

using namespace std;

int main()
{
    int num;
    cout << "Enter a Number:   ";
    cin >> num;

    cout << "Even Numbers:   ";

    for (int i = 0; i <= num; i++)
    {
        if (i % 2 == 0)
        {
            cout << i << "\t";
        }
    }

    cout << "\nOdd Numbers:   ";

    for (int i = 0; i <= num; i++)
    {
        if (i % 2 == 1)
        {
            cout << i << "\t";
        }
    }
    return 0;
}
