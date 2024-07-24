#include <iostream>

using namespace std;

int main()
{
    cout << "Data Type\t\t\tSize (Bytes)" << endl;
    cout << "---------------------------------------" << endl;
    cout << "Integers\t\t\t" << sizeof(int) << endl; //4
    cout << "Character\t\t\t" << sizeof(char) << endl;//1
    cout << "Float\t\t\t\t" << sizeof(float) << endl;//4
    cout << "Boolean\t\t\t\t" << sizeof(bool) << endl;//1
    cout << "Long\t\t\t\t" << sizeof(long) << endl;//4
    cout << "Double\t\t\t\t" << sizeof(double) << endl;//8
    cout << "Short\t\t\t\t" << sizeof(short) << endl;//2
    cout << "Long Long\t\t\t" << sizeof(long long) << endl;//8
    cout << "Unsigned Integers\t\t" << sizeof(unsigned int) << endl;//4
    cout << "Unsigned Character\t\t" << sizeof(unsigned char) << endl;//1
    cout << "Unsigned long\t\t\t" << sizeof(unsigned long) << endl;//4
    cout << "Unsigned short\t\t\t" << sizeof(unsigned short) << endl;//2
    cout << "Unsigned Long Long\t\t" << sizeof(unsigned long long) << endl;//8
    cout << "Pointer\t\t\t\t" << sizeof(int*) << endl;//4
    return 0;
}
