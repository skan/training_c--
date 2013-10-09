#include <iostream>
using namespace std;

#include "vect.h"
#include "matrice.h"

int main()
{
   vect a(1,2,3);
   a.affiche();
   
   double tab[3][3]={{1,2,3},{4,5,6},{7,8,9}};
   matrice x(tab);
   x.affiche();

   vect resultat;
   resultat = prod(a,x);
   cout << endl;
   resultat.affiche();
}

vect prod (vect &a, matrice &b)
{
  vect res ;
  int i,j;
  for (i=0; i<3; i++)
  {
     for (j=0; j<3; j++)
        res.m_vect[i]+= a.m_vect[j]*b.m_matrice[i][j];
  }
  return res;
}

