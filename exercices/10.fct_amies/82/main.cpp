#include <iostream>
using namespace std;
#include "Vector.h"

int main()
{
   Vector *s = new Vector(1,3);
   Vector t;
   Vector a(1);
   Vector c(1);
   Vector b(2,3,4);
   a.afficher();
   b.afficher();

   cout << "addition " << endl;
   //c = a.addition(b);
   c.afficher();

   cout << "nombre de points: " << Vector::getCompteur() << endl;

   cout << "coincide ? : "<< coincide(a,c) << endl;
   delete s;
   return 0;
}
