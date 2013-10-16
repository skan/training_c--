#include "setint1.h"
#include <iostream>
using namespace std ;
int main()
{ 
   set_int ens(5);
   cout << "donnez 20 entiers \n" ;
   int i, n ;
   for (i=0 ; i<5 ; i++)
   { 
      //cin >> n ;
      n = i;
      ens.ajoute (n) ;
   }
   cout << "il y a : " << ens.cardinal () << " entiers différents\n" ;
   ens.init();
   while (ens.existe()) cout << ens.prochain() << " ";
   cout  << endl;

   set_int copie(1);
   for (i=0 ; i<9 ; i++)
   { 
      //cin >> n ;
      n = i ;
      copie.ajoute (n) ;
   }
   cout << "il y a : " << copie.cardinal () << " entiers différents\n" ;
   copie = ens;
   cout << "il y a : " << copie.cardinal () << " entiers différents\n" ;
   copie.init();
   while (copie.existe()) cout << copie.prochain() << " ";
   cout  << endl;
   return 0;
}

