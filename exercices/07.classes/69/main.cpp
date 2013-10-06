#include <iostream>
using namespace std;
#include "Vector.h"

int main()
{
   Vector t;
   Vector a(1);
   Vector b(2,3,4);
   a.afficher();
   b.afficher();
   a=b;
   a.afficher();
   t.afficher();
   return 0;
}
