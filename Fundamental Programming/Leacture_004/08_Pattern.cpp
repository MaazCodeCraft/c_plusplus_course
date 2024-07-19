    /*
    1
    2 1
    3 2 1
    4 3 2 1
    */

#include <iostream>

using namespace std;

int main() {
    int num;
    cout << "Enter the value of n: ";
    cin >> num;

    for (int row = 1; row <= num; row++) {
        int start = row;
        for (int col = row; col >= 1; col--) {
            cout << col << " ";
        }
        cout << endl;
    }

    return 0;
}
