#include <stdio.h>
#include <iostream>
using namespace std ;

void calulMaxMin (int *t, int nval, int *maximal, int *minimal)
{
   int *adt;
   *maximal=*minimal=*(t+nval-1);
   for (adt = t+nval-1 ; adt >= t ; adt--)
   {
      if (*(adt) > *maximal)
         *maximal = *adt;
      if (*(adt) < *minimal)
         *minimal = *adt;
   }
}

int main()
{
   int const nval = 5;
   int t [nval] ;
   int i(0);
   int min(0), max(0) ;

   for (i = 0; i < nval ; i++) cin >> *(t+i);
   calulMaxMin(t,nval,&max,&min);
   cout << "la valeur max du tableau est " << max << " et la valeur min " << min << endl;

#if 0
   int * adt ;
   for (i=0, j=0 ; i<3 ; i++) t[i] = j++ + i ; /* 1 */
   for (i=0 ; i<3 ; i++) cout << t[i] << " " ; /* 2 */
   cout << "\n" ; 
   for (i=0 ; i<3 ; i++) cout << *(t+i) << " " ; /* 3 */
   printf ("\n") ; 
   for (adt = t ; adt < t+3 ; adt++) cout << *adt << " ";
      cout << "\n" ;
   for (adt = t+2 ; adt>=t ; adt--) cout << *adt << " ";
   cout << "\n" ;
   /* 4 */
   /* 5 */
#endif
}

