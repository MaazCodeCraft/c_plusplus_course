#include <iostream>

using namespace std;

int main() {
    int num;
    cout << "Enter the value of n: ";
    cin >> num;

    for (int row = 1; row <= num; row++) {
        int start = row; // Initialize the starting number for each row
        for (int col = 1; col <= row; col++) {
            cout << start << " ";
            start++; // Increment the number for the next column
        }
        cout << endl;
    }

    return 0;
}
