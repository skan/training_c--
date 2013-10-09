#include <iostream>
using namespace std;

#include "point.h"

int main()
{
   point a(1,1);
   point *b = new point(2,2);

   affiche (a);
   affiche (*b);
   
   return 0;
}
