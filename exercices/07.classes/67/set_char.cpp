#include <iostream>
using namespace std;
#include "set_char.h"

set_char::set_char ()
{ int i ;
   for (i=0 ; i<N_CAR_MAX ; i++) ens[i] = 0 ;
}

void set_char::ajoute (unsigned char c)
{
   ens[c] = 1 ;
}

int set_char::appartient (unsigned char c)
{
   return ens[c] ;
}

int set_char::cardinal ()
{
   int i, n ;
   for (i=0, n=0 ; i<N_CAR_MAX ; i++) if (ens[i]) n++ ;
   return n ;
}

