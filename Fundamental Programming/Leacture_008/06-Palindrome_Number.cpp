#include <iostream>

using namespace std;

int main()
{
  int num;
  int actual_number;
  int reversed = 0;
  cout << "Please Enter a Number:  ";
  cin >> num;

  actual_number = num;
  while (num > 0){
  reversed = reversed * 10 + (num % 10);
  num = num / 10;
  }
  if (reversed == actual_number){

  cout << actual_number << " Is a Palindrome." << endl;
  }else {
  cout << actual_number << " Is not a palindrome." << endl;
  }

    return 0;
}
