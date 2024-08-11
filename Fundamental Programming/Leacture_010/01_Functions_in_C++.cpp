#include <iostream>

using namespace std;

void function (){

    cout << "Hello world from functions ()" << endl;
}

int main()
{
    function ();
    cout << "Hello world main ()" << endl;
    function ();
    function ();
    function ();
    return 0;
}
