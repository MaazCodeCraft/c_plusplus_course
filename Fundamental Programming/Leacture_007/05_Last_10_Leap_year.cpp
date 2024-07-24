#include <iostream>

using namespace std;

int main()
{
    int year;
    cout << "Enter a Year:  ";
    cin >> year;

    int leap_year = 0;

    while (leap_year < 10)
    {
        if (year % 4 == 0)
        {
            leap_year ++;

            cout << year << " is Leap Year." << endl;
        }
        year --;
    }





    return 0;
}
