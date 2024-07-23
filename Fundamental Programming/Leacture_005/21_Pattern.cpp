/*

* * * *
*     *
*     *
* * * *

*/

#include <iostream>

using namespace std;

#include <iostream>

int main() {
    int num;
    cout << "Enter the value of n: ";
    cin >> num;

    for (int i = 0; i < num; ++i) {
        if (i == 0 || i == num - 1) {

            for (int j = 0; j < num; ++j) {
                cout << "* ";
            }
        } else {

            cout << "* ";
            for (int j = 0; j < num - 2; ++j) {
                cout << "  ";
            }
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}

