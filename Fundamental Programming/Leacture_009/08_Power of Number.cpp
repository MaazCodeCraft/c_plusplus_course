#include <iostream>

#include <cmath>

using namespace std;

int main()
{
    double base, exponent, result;

    cout << "Base:   ";
    cin >> base;

    cout << "Exponent:   ";
    cin >> exponent;

    result = pow (base, exponent);

    cout << "Result:   " << result;
    return 0;
}
