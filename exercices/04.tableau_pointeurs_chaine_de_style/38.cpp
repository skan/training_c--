#include <stdio.h>
#include <iostream>
using namespace std ;

int main()
{
   int som(0);
   float t[3] [4] = {{2,2,2,2},{5,5,5,5},{10,10,10,10}};
   float *adt;
   int i, j ;
   for (i=0 ; i<3 ; i++)
      for (j=0 ; j<4 ; j++)
         som += t[i] [j] ;

   cout << som << endl;

   som=0;
   adt= (float *)t;
   for (i=0; i<12; i++)
      som+= *(adt+i);
   cout << som << endl;

}

