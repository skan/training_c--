#include <iostream>
using namespace std;
#include "skInt.h"

set_int::set_int (int dim)
{ 
   adval = new int [nmax=dim] ;
   nelem = 0 ;
}
set_int::~set_int ()
{ 
   delete adval ;
}

set_int& set_int::operator < (int a)
{
   if (!(*this)[a]) adval[nelem++] = a;
   return *this;
}

int set_int::operator [] (int nb)
{
   int i(0);
   while ((adval[i] != nb) && (i < nmax)) i++;
   return (i < nmax);
}
