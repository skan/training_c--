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
#else
void operator = (vect &a, vect const b)
{
   a.x + b.x;
   a.y = b.y;
   a.z = b.z;
}

#endif
