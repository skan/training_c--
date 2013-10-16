#include "vect.h"

int vect::operator [] (int nb)
{
   if (nb < 3 && nb >= 0 ) return v[nb];
   else return v[0];
}
