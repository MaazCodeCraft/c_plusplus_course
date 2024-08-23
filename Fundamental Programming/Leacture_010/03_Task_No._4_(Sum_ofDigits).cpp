#include <iostream>

using namespace std;

int SumOfDigits (int num){

    int sum = 0;

    while (num > 0){
    sum += num % 10;
    num = num / 10;
    }
    return sum;
}

int main (){

    int num1;
    int result;
    cout << "Please Enter a positive integer: ";
    cin >> num1;

    result = SumOfDigits (num1);
    cout << "Sum Of Digits is " << result << endl;

return 0;
}
