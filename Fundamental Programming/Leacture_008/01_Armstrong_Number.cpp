#include <iostream>

using namespace std;

int main()
{
    int num;
    cout << "Enter a Number:  ";
    cin >> num;

    int Armstrong = 0;
    int r;
    int actual_number;

    actual_number = num;

    while (num > 0)
    {
        r = num % 10;
        Armstrong = (r*r*r) + Armstrong;
        num = num / 10;
    }

    if (actual_number == Armstrong)
    {
        cout << actual_number << " is Armstrong.";
    }else
    {
        cout << actual_number << " is not Armstrong.";
    }

    return 0;
}
