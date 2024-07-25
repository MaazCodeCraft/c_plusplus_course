#include <iostream>

using namespace std;

int main ()
{
    float num1;
    float num2;
    char opreation;

    cout << "******Calculator******" << endl;
    cout << "Choose Operations (+,-,*,/):   ";
    cin >> num1 >> opreation >> num2;

    switch (opreation)
    {
    case '+':
        cout << num1 << opreation << num2 << " = " << num1 + num2;
        break;

    case '-':
        cout << num1 << opreation << num2 << " = " << num1 - num2;
        break;

    case '*':
        cout << num1 << opreation << num2 << " = " << num1 * num2;
        break;

    case '/':
        cout << num1 << opreation << num2 << " = " << num1 / num2;
        break;

    default:
        cout << "Invalid";
    }



    return 0;
}
