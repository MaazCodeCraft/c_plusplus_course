#include <iostream>

using namespace std;

int main()
{
    int num;
    cout << "Enter a Number:  ";
    cin >> num;

    int i;
    int j;

    for (i = 1; i <= num; i++)
    {
        for (j = 2; j <= i; j++)
        {
            if (i % j == 0)
            {
                break;
            }
        }
        if (i == j)
        {
            cout << j << " ";
        }
    }


    return 0;
}
