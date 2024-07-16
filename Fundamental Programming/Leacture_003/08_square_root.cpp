#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float num;
    float sq;

    start:

    cout << "Please enter a number \n";
    cin >> num;

    if (num >= 0) {
    sq = sqrt (num);
    cout << "Square root of " << num << " is " << sq;
    } else {
    cout << "Cannot be calculated squre root of negative numbers \n";

    goto start;
    }

    return 0;
}
