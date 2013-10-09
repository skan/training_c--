#include <iostream>
using namespace std;

#include "vect.h"
#include "matrice.h"

int main()
{
   vect a(1,1,2);
   a.affiche();
   
   double tab[3][3]={{1,2,3},{4,5,6},{7,8,9}};
   matrice x(tab);
   x.affiche();
}
