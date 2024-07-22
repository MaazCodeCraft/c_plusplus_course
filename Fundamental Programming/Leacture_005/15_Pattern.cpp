    /*

    *
   ***
  *****
 *******
*********

    */

#include <iostream>

using namespace std;

int main()
{
    int num;
    cout << "Enter the Value of n:  ";
    cin >> num;

    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <=  num - i; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= 2 * i - 1; k++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
