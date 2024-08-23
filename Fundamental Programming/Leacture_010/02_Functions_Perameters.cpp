#include <iostream>

using namespace std;

void IntroduceMe (string name, string city, int age){

    cout << "My name is " << name << endl;
    cout << "I from " << city << endl;
    cout << "I'm " << age << " years old" << endl;
}

int main()
{
    string name1;
    string city1;
    int age1;

    cout << "Name:  " ;
    cin >> name1;

    cout << "City:  " ;
    cin >> city1;

    cout << "Age:  " ;
    cin >> age1;

    IntroduceMe (name1, city1, age1);


//    IntroduceMe ("Maaz Ur Rahman");
//    IntroduceMe ("Imran");


    return 0;
}
