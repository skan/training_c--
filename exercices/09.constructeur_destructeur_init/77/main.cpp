#include "setint1.h"
#include <iostream>
using namespace std ;
main()
{ 
   set_int ens(5);
   cout << "donnez 20 entiers \n" ;
   int i, n ;
   for (i=0 ; i<5 ; i++)
   { 
      cin >> n ;
      ens.ajoute (n) ;
   }
   cout << "il y a : " << ens.cardinal () << " entiers différents\n" ;
}

