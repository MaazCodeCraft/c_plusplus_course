#include <iostream>

using namespace std;

int main() {

    float f;

    cout << "Enter the temperature in Fahrenheit : ";
    cin >> f;

    float c = ((f-32) * 5) / 9;

    cout << "Temperature in Celsius : " << c <<endl;

    return 0;
}
