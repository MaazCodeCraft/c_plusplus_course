/*

      * * * * *
    *           *
  *               *
*                   *
*                   *
*                   *
*                   *
*                   *
  *               *
    *           *
      * * * * *

      */

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int radius;
    cout << "Enter the value of n: ";
    cin >> radius;

    int diameter = 2 * radius;
    int centerX = radius;
    int centerY = radius;

    for (int y = 0; y <= diameter; ++y) {
        for (int x = 0; x <= diameter; ++x) {

            int distance = static_cast<int>(round(sqrt((x - centerX) * (x - centerX) + (y - centerY) * (y - centerY))));
            if (distance == radius) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }

    return 0;
}
