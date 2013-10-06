#include <iostream>
using namespace std;
#include "Vector.h"

int main()
{
   Vector t;
   Vector a(1);
   Vector c(1);
   Vector b(2,3,4);
   a.afficher();
   b.afficher();
   a.afficher();
   t.afficher();

   cout << "coincide a & c ? : " << a.coincide(&c) << endl; 
   cout << "coincide a & c ? : " << a.coincide(c) << endl; 
   cout << "coincide a & b ? : " << a.coincide(b) << endl; 
   return 0;
}
