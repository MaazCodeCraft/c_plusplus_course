#include <iostream>

using namespace std;

int main()
{
//    Numbers Between 1 to 500 that are divisible by 3 and 5;

    int num = 1;

    while (num <= 500)
    {
        if (num % 3 == 0 && num % 5 == 0)
            cout << num << " is divisible." << endl;
        num++;
    }

    return 0;
}
