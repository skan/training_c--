#include "setint1.h"
set_int::set_int (int dim)
{ 
   adval = new int [nmax = dim] ; // allocation tableau de valeurs
   nelem = 0 ;
}


set_int::~set_int ()
{
   delete adval ; // libération tableau de valeurs
}

void set_int::ajoute (int nb)
{
   if (!appartient (nb) && (nelem<nmax)) adval [nelem++] = nb ;
}

int set_int::appartient (int nb)
{ 
   int i=0 ;
   // on examine si nb appartient déjà à l'ensemble
   // (si ce n'est pas le cas, i vaudra nele en fin de boucle)
   while ( (i<nelem) && (adval[i] != nb) ) i++ ;
   return (i<nelem) ;
}
int set_int::cardinal ()
{ 
  return nelem ;
}

set_int::set_int (set_int & e) // ou set_int::set_int (const set_int & e)
{
   adval = new int [nmax = e.nmax] ; // allocation nouveau tableau
   nelem = e.nelem ;
   int i ;
   for (i=0 ; i<nelem ; i++) // copie ancien tableau dans nouveau
      adval[i] = e.adval[i] ;
}


