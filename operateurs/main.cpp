#include <iostream>
#include "Duree.h"

using namespace std;

int main()
{
   Duree duree1(3, 10, 2), duree2(3, 3, 27), duree3(3, 3, 27);
   Duree resultat;

   duree1.afficher();
   cout << "+" << endl;
   duree2.afficher();
   resultat = duree1 - duree2;
   cout << "=" << endl;
   cout << resultat ;

   duree1.afficher();
   cout << "+ 59 " << endl;
   resultat = duree1 + 59 ;
   cout << "=" << endl;
   resultat.afficher();

   cout << resultat ;
   if (duree1 > duree2)
      cout << "bingo" << endl;
   return 0;
}



