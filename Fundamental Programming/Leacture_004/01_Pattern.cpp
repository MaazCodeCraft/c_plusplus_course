 /*
    1 2 3 4 n
    1 2 3 4 n
    1 2 3 4 n
    1 2 3 4 n
    */
#include <iostream>

using namespace std;

int main() {
    int num;

    cout << "Enter the value of n: ";
    cin >> num;

    for (int row = 1; row <= num; row++) {
        for (int col = 1; col < num; col++) {
            cout << col << " ";
        }
        cout << num << endl;
    }

    return 0;
}
