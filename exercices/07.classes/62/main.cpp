#include <iostream>
using namespace std;
#include "point.h"

int main()
{
   point a(3,4);
   a.affiche();
   a.deplace(1,-2);
   a.affiche();
   a.homothetie(3);
   a.affiche();
   return 0;
}
