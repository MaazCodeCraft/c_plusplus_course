    /*
    1
    2 3
    3 4 5
    4 5 6 7
    */

#include <iostream>

using namespace std;

int main() {
    int num;
    cout << "Enter the value of n: ";
    cin >> num;

    for (int row = 1; row <= num; row++) {
        int start = row;
        for (int col = 1; col <= row; col++) {
            cout << start << " ";
            start++;
        }
        cout << endl;
    }

    return 0;
}
