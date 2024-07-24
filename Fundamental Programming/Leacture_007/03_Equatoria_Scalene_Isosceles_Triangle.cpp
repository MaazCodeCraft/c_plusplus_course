#include <iostream>

using namespace std;

int main()
{
   float a, b , c;
   cout << "a, b, c: " << endl;
   cin >> a >> b >> c;

   if (a==b && b==c)
   {
       cout << "Equatorial Triangle" << endl;
   } else
   {
       if (a != b && a != c && b != c)

           cout << "Scalene Triangle" << endl;

    else

       cout << "Isosceles Triangle" << endl;
   }


    return 0;
}
