#include <iostream>

using namespace std;

int main()
{
    int HostUserNumber;
    int GuestUserNumber;

    cout << "Enter Host Numbers:  ";
    cin >> HostUserNumber;

    cout << "Enter Guest Numbers:  ";
    cin >> GuestUserNumber;

    if (HostUserNumber == GuestUserNumber)
    {
        cout << "Correct." << endl;
    }else
    {
        cout << "Failed" << endl;
    }


    return 0;
}
