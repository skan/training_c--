#include <iostream>
using namespace std;
#include "vect.h"

const int nbcol = 8;
const int nblin = 5;


int main()
{ 
   int i(0),j(0);
   vect v(nblin,nbcol);
   for (i = 0; i< nblin; i++)
   {
      for (j = 0; j< nbcol; j++)
         v(i,j)=i+j;
   }

   for (i = 0; i< nblin; i++)
   {
      for (j = 0; j< nbcol; j++)
      {
         cout <<  v(i,j) << "\t" ;
      }
      cout << endl;
   }
   return 0;
}
