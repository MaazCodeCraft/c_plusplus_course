    /*
    A A A
    B B B
    C C C
    */

#include <iostream>

using namespace std;

int main() {
    int num;
    cout << "Enter the value of n: ";
    cin >> num;

    for (int row = 1; row <= num; row++) {
        char letter = 'A' + (row - 1);
        for (int col = 1; col <= num; col++) {
            cout << letter << " ";
        }
        cout << endl;
    }

    return 0;
}
