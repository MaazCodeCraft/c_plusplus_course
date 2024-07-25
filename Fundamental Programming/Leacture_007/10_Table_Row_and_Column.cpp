#include <iostream>

using namespace std;

int main()
{
    int num;
    cout << "Enter a Number:  ";
    cin >> num;

    for (int i = 0; i <= num; i++)
    {
        cout << i << " ";

        for (int j = 1; j <= num; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }


    return 0;
}
