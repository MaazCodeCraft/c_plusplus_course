#include <iostream>

using namespace std;

int main()
{
    int num;
    int reversed = 0;
    cout<< "Please Enter a Number \n";
    cin >> num;

    while (num > 0) {
        reversed = reversed * 10 + (num % 10);
        num = num / 10;
    }
    cout << "Reversed " << reversed;
    return 0;
}
