#include "vect.h"

float& vect::operator [] (int nb)
{
   if (nb < 0 || nb > size ) nb = 0;
   return *(v+nb);
}
