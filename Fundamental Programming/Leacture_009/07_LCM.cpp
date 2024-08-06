#include <iostream>
using namespace std;

int main() {
    int n1, n2, lcm;

    cout << "Enter First number: ";
    cin >> n1;
    cout << "Enter Second number: ";
    cin >> n2;

    lcm = (n1 > n2) ? n1 : n2;

    while (true) {
        if (lcm % n1 == 0 && lcm % n2 == 0) {
            cout << "LCM=" << lcm;
            break;
        }
        ++lcm;
    }

    return 0;
}
