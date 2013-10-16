#include <iostream>
using namespace std;
#include "vect.h"


int main()
{ 
   int i(0);
   vect v(3);
   for (i = 0; i< 3; i++)
      v[i]=i;

   for (i = 0; i< 3; i++)
      cout <<  v[i] << endl;
   return 0;
}
