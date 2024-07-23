/*
    * * * * *
    * * * * *
    * * * * *
    * * * * *
    * * * * *

*/
#include <iostream>

using namespace std;

int main() {
    int rows;
    int columns;
    cout << "Enter the number of rows: ";
    cin >> rows;

    cout << "Enter the number of columns: ";
    cin >> columns;

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}
