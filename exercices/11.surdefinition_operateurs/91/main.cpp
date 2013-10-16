#include <iostream>
using namespace std;
#include "vect.h"


int main()
{ 
   int i(0),j(0);
   vect v(3,3);
   for (i = 0; i< 3; i++)
   {
      for (j = 0; j< 3; j++)
         v(i,j)=i*j;
   }

   for (i = 0; i< 3; i++)
   {
      for (j = 0; j< 3; j++)
      {
         cout <<  v(i,j) << endl;
      }
      cout << endl;
   }
   return 0;
}
