#ifndef VECT_H
#define VECT_H
#include "matrice.h"
class matrice;
class vect
{
   public:
      friend vect prod (vect &, matrice&);
      vect();
      vect(double, double, double);
      void affiche();

   private:
      double m_vect[3];
};

#endif
