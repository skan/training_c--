#include <iostream>
using namespace std;

#include "matrice.h"

matrice::matrice()
{
   int i,j;
   for (i=0; i<3; i++)
   {
      for (j=0; j<3; j++)
      {
         m_matrice[i][j]=0;
      }
   }
}
matrice::matrice(double tab[3][3])
{
   int i,j;
   for (i=0; i<3; i++)
   {
      for (j=0; j<3; j++)
      {
         m_matrice[i][j]=tab[i][j];
      }
   }
}
void matrice::affiche() const
{
   for (int i = 0; i<3; i++)
   {
      for (int j = 0; j<3; j++)
      {
         cout << m_matrice[i][j] << ",";
      }
      cout << endl;
   }
}
