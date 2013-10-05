#include <stdio.h>

#define nb 10
#define exclus 5
main()
{
   int valeurs [nb] ;
   int i, nbval = 0 ;
   printf ("donnez %d valeurs :\n", nb) ;
   for (i=0 ; i<nb ; i++) scanf ("%d", &valeurs[i]) ;
   for (i=0 ; i<nb ; i++)
      switch (valeurs[i])
      { case exclus-1 :
         case exclus
            :
         case exclus+1 : nbval++ ;
      }
   printf ("%d valeurs sont interdites", nbval) ;
}

