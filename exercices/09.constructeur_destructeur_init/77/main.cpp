#include "setint1.h"
#include <iostream>
using namespace std ;
main()
{ 
   set_int ens ;
   cout << "donnez 20 entiers \n" ;
   int i, n ;
   for (i=0 ; i<20 ; i++)
   { 
      cin >> n ;
      ens.ajoute (n) ;
   }
   cout << "il y a : " << ens.cardinal () << " entiers différents\n" ;
}

