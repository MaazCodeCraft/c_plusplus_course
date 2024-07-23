/*

    *
   ***
  *****
 *******
*********
    *
    *
    *
    *
    *

    */

#include <iostream>

using namespace std;

int main() {
    int num;
    cout << "Enter a Number: ";
    cin >> num;

    // Upper part
    for (int i = 1; i <= num; i++) {
        for (int j = 1; j <= num - i; j++) {
            cout << " ";
        }
        for (int k = 1; k <= 2 * i - 1; k++) {
            cout << "*";
        }
        cout << endl;
    }

    // Lower part
    for (int i = 1; i <= num; i++) {
        for (int j = 1; j <= num - 1; j++) {
            cout << " ";
        }
        cout << "*" << endl;
    }

    return 0;
}
