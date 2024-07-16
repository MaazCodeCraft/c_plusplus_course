#include <iostream>

using namespace std;

int main()
{

    char (ch);
    cout << "please enter alphabet \n";
    cin >> ch;

    switch (ch){
    case 'A':
    case 'a':
    case 'E':
    case 'e':
    case 'I':
    case 'i':
    case 'O':
    case 'o':
    case 'U':
    case 'u':
    cout << "This alphabet is Vowel";
    break;

    default:
    cout << "This alphabet is Consonant";
    }




    return 0;
}
