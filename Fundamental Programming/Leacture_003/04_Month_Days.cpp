#include <iostream>

using namespace std;

int main()
{
    int year;
    cout << "Enter Year:   ";
    cin >> year;

    int month;
    start:
    cout << "Enter Month:   ";
    cin >> month;

    switch (month)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            cout << "This Month Contain 31 days.\n";
            break;

        case 2:
            if (year % 4 == 0)
            {
                cout << "This Month Contain 29 days." << endl;
            }else
            {
                cout << "This month contain 28 days." << endl;
            }
            break;

        case 4:
        case 6:
        case 9:
        case 11:
            cout << "This Month contain 30 days.\n" << endl;
            break;

        default:
            cout << "Invalid Month. Please Enter Month (1 to 12)." << endl;

        goto start;


    }
    return 0;
}
