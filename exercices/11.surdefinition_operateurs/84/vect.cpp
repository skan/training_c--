#include <iostream>
using namespace std;
#include "vect.h"

void vect::affiche() const
{
   cout << "<" << x << "," << y << "," << z << ">" << endl;
}
#if USE_MEMBER_FCT
vect& vect::operator = (vect const a)
{
   x = a.x;
   y = a.y;
   z = a.z;
   return *this;
}
int vect::operator == (vect const a)
{
   if (x == a.x && y == a.y && z == a.z)
      return 1;
   else
      return 0;
}
int vect::operator != (vect const a)
{
   if (*this == a)
      return 0;
   else
      return 1;
}
#else
int operator == (vect const a, vect const b)
{
   if (a.x == b.x && a.y == b.y && a.z == b.z)
      return 1;
   else
      return 0;
}

int operator != (vect const a, vect const b)
{
   if (a == b)
      return 0;
   else 
      return 1;
}
#endif
