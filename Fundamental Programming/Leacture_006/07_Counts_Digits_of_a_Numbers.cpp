#include <iostream>

using namespace std;

int main ()
{
    int number;

    cout << "Numbers:  ";
    cin >> number;

    if (number == 0)
        cout << "You have enter 0. \n";
        else if
            (number < 0)
            number = -1 * number;

    int counter = 0;
    while (number > 0)
    {
        number = number / 10;
        counter++;
    }

    cout << "Numbers Contain " << counter << " Digits.";

    return 0;
}
