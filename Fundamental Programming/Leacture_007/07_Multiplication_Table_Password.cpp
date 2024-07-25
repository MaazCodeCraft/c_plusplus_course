#include <iostream>

using namespace std;

int main()
{
    string user_name, password;
    start:
    cout << "Enter Username:   ";
    cin >> user_name;

    cout << "Enter Password:   ";
    cin >> password;

    if (user_name == "maaz" && password == "1234")
    {
        cout << "Login Successful." << endl;

        int table;
        cout << "Choose Table for Multiplication:   ";
        cin >> table;

        for (int i = 1; i <= 10; i++)
        {
            cout << table << " * " << i << " = " << table * i << endl;
        }
    }   else
    {
        cout << "Invalid username or Password." << endl;
        goto start;
    }
    return 0;
}
