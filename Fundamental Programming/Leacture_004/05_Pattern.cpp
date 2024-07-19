 /*
    1
    2 2
    3 3 3
    4 4 4 4
    */

#include <iostream>

using namespace std;

int main()
{
    int num;
    cout << "Enter the vale of n:  ";
    cin >> num;

    for (int row = 1; row <= num; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            cout << row<< " ";
        }
        cout << endl;
    }
    return 0;
}
