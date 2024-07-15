#include <iostream>

using namespace std;

int main()
{
    int month;
    cout << "Please enter month [1-12] " << endl;
    cin >> month;

    if (month == 4 || month == 6 || month == 9 || month == 11) {
    cout << "This month contain 30 days";
    }

    else if ( month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12 ){
    cout << "This month contain 31 days";
    }

    else if ( month == 2) {
    cout << "This month contain 29 days";
    }

    else {
        cout <<"invalid month number";

    }
    return 0;
}
