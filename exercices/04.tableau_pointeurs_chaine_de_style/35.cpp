#include <stdio.h>
#include <iostream>
using namespace std ;

int max (int *t)
{
   int maximal = 0;
   int *adt;
   for (adt = t+5 ; adt >= t ; adt--)
   {
      if (*(adt) > maximal)
         maximal = *adt;
   }
   return maximal;
}

int main()
{
   int t [5] ;
   int i(0);

   for (i = 0; i < 5 ; i++)
   {
      cin >> *(t+i);
   }
   cout << "la valeur max du tableau est " << max(t) << endl;

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

