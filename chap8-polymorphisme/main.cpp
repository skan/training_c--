#include <iostream>
#include <string>
#include "Vehicule.h"
#include "Moto.h"
#include "Voiture.h"

using namespace std;

void presenter(Vehicule v) ///Presente le vehicule passé en argument
{
   v.affiche();
}

int main()
{
   Vehicule v;
   //v.affiche();   
   presenter(v);


   Moto m;
   //m.affiche();
   presenter(m);

   return 0;
}
