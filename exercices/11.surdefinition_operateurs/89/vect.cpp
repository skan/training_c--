#include "vect.h"

int vect::operator [] (int nb) const
{
   if (nb < 3 && nb >= 0 ) return v[nb];
   else return v[0];
}

float& vect::operator [] (int nb)
{
   if (nb < 3 && nb >= 0 ) 
      return v[nb];
}
