    /*
    A B C D
    A B C D
    A B C D
    A B C D
    */

#include <iostream>

using namespace std;

int main() {
    int num;
    cout << "Enter the value of n: ";
    cin >> num;

    for (int row = 1; row <= num; row++) {

        for (int col = 0; col < num; col++) {
            char letter = 'A' + col ;
            cout << letter << " ";
        }
        cout << endl;
    }

    return 0;
}
