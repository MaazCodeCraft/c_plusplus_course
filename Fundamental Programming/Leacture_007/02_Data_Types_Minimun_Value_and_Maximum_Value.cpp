#include <iostream>
#include <climits>
#include <cfloat>

using namespace std;

int main() {
    cout << "Constant     Maximum Value      \tMinimum Value" << endl;
    cout << "----------------------------------------------------" << endl;
    cout << "CHARACTER:" << endl;
    cout << "CHAR_BIT     " << CHAR_BIT << "\t\t\t\tN/A" << endl;
    cout << "CHAR_MAX     " << CHAR_MAX << "\t\t\t" << CHAR_MIN << endl;
    cout << "SCHAR_MAX    " << SCHAR_MAX << "\t\t\t" << SCHAR_MIN << endl;
    cout << "UCHAR_MAX    " << UCHAR_MAX << "\t\t\tN/A" << endl;
    cout << "----------------------------------------------------" << endl;

    cout << "SHORT:" << endl;
    cout << "SHRT_MAX     " << SHRT_MAX << "\t\t\t" << SHRT_MIN << endl;
    cout << "USHRT_MAX    " << USHRT_MAX << "\t\t\tN/A" << endl;
    cout << "----------------------------------------------------" << endl;

    cout << "INTEGERS:" << endl;
    cout << "INT_MAX      " << INT_MAX << "\t\t\t" << INT_MIN << endl;
    cout << "UINT_MAX     " << UINT_MAX << "\t\t\tN/A" << endl;
    cout << "----------------------------------------------------" << endl;

    cout << "LONG:" << endl;
    cout << "LONG_MAX     " << LONG_MAX << "\t\t\t" << LONG_MIN << endl;
    cout << "ULONG_MAX    " << ULONG_MAX << "\t\t\tN/A" << endl;
    cout << "----------------------------------------------------" << endl;

    cout << "LONG LONG:" << endl;
    cout << "LLONG_MAX    " << LLONG_MAX << "\t" << LLONG_MIN << endl;
    cout << "ULLONG_MAX   " << ULLONG_MAX << "\tN/A" << endl;
    cout << "----------------------------------------------------" << endl;

    cout << "FLOAT:" << endl;
    cout << "FLT_MAX      " << FLT_MAX << "\t\t" << FLT_MIN << endl;
    cout << "----------------------------------------------------" << endl;

    cout << "DOUBLE:" << endl;
    cout << "DBL_MAX      " << DBL_MAX << "\t\t" << DBL_MIN << endl;
    cout << "----------------------------------------------------" << endl;

    return 0;
}
