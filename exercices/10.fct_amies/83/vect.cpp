#include <iostream>
using namespace std;

#include "matrice.h"

vect::vect()
{
   m_vect[0]=0;
   m_vect[1]=0;
   m_vect[2]=0;
}
vect::vect(double a, double b, double c)
{
   m_vect[0]=a;
   m_vect[1]=b;
   m_vect[2]=c;
}

void vect::affiche()
{
   cout << "vecteur : (" << m_vect[0] << "," << m_vect[1] << "," << m_vect[2] << ")" << endl;
}

