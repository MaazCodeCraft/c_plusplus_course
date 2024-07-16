#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    int sum, difference, product, division, remainder, average;

    cout << "enter 1st number" << endl;
    cin >> num1;

    cout << "enter 2nd number" << endl;
    cin >> num2;

    //  num1 to become 34
    num1 = num1/num2 + num1 + num1 + num1;


    sum = num1 + num2;
    cout << "sum of " << num1 << " and " << num2 << " is " << sum << endl;

    difference = num1 - num2;
    cout << "difference of " << num1 << " and " << num2 << " is " << difference << endl;

    product = num1 * num2;
    cout << "product of " << num1 << " and " << num2 << " is " << product << endl;

    division = num1 / num2;
    cout << "division of " << num1 << " and " << num2 << " is " << division << endl;

    remainder = num1 % num2;
    cout << "remainder of " << num1 << " and " << num2 << " is " << remainder << endl;

    return 0;
}
