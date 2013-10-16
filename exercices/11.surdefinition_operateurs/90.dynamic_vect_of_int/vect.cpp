#include "vect.h"

int vect::operator [] (int nb) const
{
   if (nb < 0 || nb > size ) nb = 0;
   return *(v+nb);
}

float& vect::operator [] (int nb)
{
   if (nb < 0 || nb > size ) nb = 0;
   return *(v+nb);
}
