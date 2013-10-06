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

   cout << "addition " << endl;
   c = a.addition(b);
   c.afficher();

   cout << "nombre de points: " << Vector::getCompteur() << endl;
   return 0;
}
