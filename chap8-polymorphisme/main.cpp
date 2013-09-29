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

   Vehicule *v1(0);
   v1 = new Voiture(45,2);
   v1->affiche();
   delete v1;

   return 0;
}
