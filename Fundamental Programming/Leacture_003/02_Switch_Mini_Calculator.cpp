#include <iostream>

using namespace std;

int main()
{
    int num1;
    int num2;
    int numnum;

    cout << "please enter 1st number \n";
    cin >> num1;

    cout << "please enter 2nd number \n";
    cin >> num2;

    cout <<            "===>  press 1 for addition \n";
    cout <<            "===>  press 2 for subtraction \n";
    cout <<            "===>  press 3 for multiplication \n";
    cout <<            "===>  press 4 for division \n";

    cout << "enter your choice ";
    cin >> numnum;

    switch (numnum)
{
    case 1:
    cout << "addition of 1st & 2nd is " << num1 + num2;
    break;

    case 2:
    cout << "subtraction of 1st & 2nd is " << num1 - num2;
    break;

    case 3:
    cout << "multiplication of 1st & 2nd is " << num1 * num2;
    break;

    case 4:
    cout << "division of 1st & 2nd is " << num1 / num2;
    break;


    default:
    cout << "input invalid";

}

    return 0;

}
