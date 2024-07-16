#include <iostream>

using namespace std;

int main()
{
    int num;
    start:
    cout << "Please enter a number from 0 to 10 \n";
    cin >> num;

    cout << "You have entered ";

    switch (num) {
    case 0:
    cout << "ZERO";
    break;

    case 1:
    cout << "ONE";
    break;

    case 2:
    cout << "TWO";
    break;

    case 3:
    cout << "THREE";
    break;

    case 4:
    cout << "FOUR";
    break;

    case 5:
    cout << "FIVE";
    break;

    case 6:
    cout << "SIX";
    break;

    case 7:
    cout << "SEVEN";
    break;

    case 8:
    cout << "EIGHT";
    break;

    case 9:
    cout << "NINE";
    break;

    case 10:
    cout << "TEN";
    break;

    default :
    cout << "wrong number \n";

    goto start;

    }

    return 0;
}
