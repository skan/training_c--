#include <iostream>
#include <string>
#include "Vehicule.h"
#include "Moto.h"
#include "Voiture.h"

using namespace std;

void presenter(Vehicule const& v) ///Presente le vehicule passé en argument
{
   v.affiche();
}

int main()
{
   Vehicule v;
   Vehicule *v1(0), *v2(0);
   v1 = new Voiture;
   v2 = new Moto;
   //v.affiche();   
   presenter(v);

   Moto m;
   //m.affiche();
   presenter(m);

   presenter(*v1);
   presenter(*v2);
   return 0;
}
