#include <iostream>
using namespace std;
#include "point.h"

int main()
{
   point a(3,4);
   point b(7,3);
   point c(7.2,3.1);
   a.affiche();
   a.deplace(1,-2);
   a.affiche();
   a.homothetie(3);
   a.affiche();
   a=c;
   a.affiche();
   
   return 0;
}
