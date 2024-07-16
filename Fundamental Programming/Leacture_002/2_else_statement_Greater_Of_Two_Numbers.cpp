#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter the value of a : ";
    cin >> a;

    cout << "Enter the value of b : ";
    cin >> b;

    if(a > b) {
        cout << a << " is greater" << endl;
    } else if (b > a){
        cout << b << " is greater" << endl;
    } else
    {
        cout << "both numbers are equal." << endl;
    }

    return 0;
}
