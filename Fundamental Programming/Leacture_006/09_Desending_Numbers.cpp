#include <iostream>

using namespace std;

int main()
{
    int num;
    cout << "Enter a Number:  ";
    cin >> num;

    for (int i = num; i >= 1; i--)
    {
        cout << i << " ";
    }

    return 0;
}
