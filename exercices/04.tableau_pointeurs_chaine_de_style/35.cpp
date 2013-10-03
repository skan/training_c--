#include <stdio.h>
#include <iostream>
using namespace std ;

void calulMaxMin (int *t, int *maximal, int *minimal)
{
   int *adt;
   *maximal=*minimal=*(t+4);
   for (adt = t+4 ; adt >= t ; adt--)
   {
      if (*(adt) > *maximal)
         *maximal = *adt;
      if (*(adt) < *minimal)
         *minimal = *adt;
   }
}

int main()
{
   int t [5] ;
   int i(0);
   int min(0), max(0) ;

   for (i = 0; i < 5 ; i++)
   {
      cin >> *(t+i);
   }
   calulMaxMin(t,&max,&min);
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

