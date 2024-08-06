#include <iostream>

using namespace std;

int main()
{
//    Sum Of Digits
    int num;
    cout << "Enter a Number:  ";
    cin >> num;

    int sum = 0;
    int r;

    while (num > 0)
    {
        r = num % 10 ;
        sum = sum + r;
        num = num / 10;
    }
        cout << "Sum of digits:  " << sum;


    return 0;
}
