#include <iostream>
using namespace std;

int main ()
{
    int input;
    int remainder;

    cout << "please enter first number " << endl;
    cin >> input;

    remainder = input % 2;

    if (remainder == 0) {
    cout << input << " is an even number";
    }

    if (remainder !=0) {
    cout << input << " is an odd number";
    }

    return 0;

}
