/*
    *
   ***
  *****
 *******
*********
   ***
  *****
 *******
*********
   ***
  *****
 *******
*********
  *****
  *****
  *****
  *****
  *****
*/

#include <iostream>

using namespace std;

int main() {

     int num;
    cout << "Enter the Value of n:  ";
    cin >> num;

//    1st Part
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

//    2nd Part
    for (int i = 2; i <= num; i++)
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

//    3rd Part
    for (int i = 2; i <= num; i++)
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


//    Last Part

    for (int i = 1 ; i <= num; i++) {
        for (int j = 1; j <= num - 3; j++) {
            cout << " ";
        }

        for (int k = 1; k <= num  ; k++) {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}
