#include <iostream>

using namespace std;

int main()
{
    int a;
    cout << "Enter a number : ";
    cin >> a;

    // if statement
    if(a > 0){
        cout << "Positive" << endl;
    }

    if(a<0){
        cout << "Negative" << endl;
    }

    if(a==0){
        cout << "Equal to zero" << endl;
    }


    return 0;
}



