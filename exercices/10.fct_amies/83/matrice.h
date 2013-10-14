#ifndef MATRICE_H
#define MATRICE_H

#include "vect.h"
class vect;

class matrice
{
   public:
      matrice();
      matrice(double tab[3][3]);
      void affiche() const;
      friend vect prod (vect &, matrice&);

   private:
      double m_matrice[3][3];
};

#endif
