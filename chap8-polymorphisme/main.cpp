#include <iostream>
#include <string>
#include <vector>
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

   vector<Vehicule*> listeVehicules;
   listeVehicules.push_back(new Voiture(15000, 5));
   listeVehicules.push_back(new Voiture(12000, 3));
   listeVehicules.push_back(new Moto(2000, 212.5));

   listeVehicules[0]->affiche();
   listeVehicules[1]->affiche();
   listeVehicules[2]->affiche();

   for (int i(0); i < listeVehicules.size(); ++i)
   {
      delete listeVehicules[i];
      listeVehicules[i] = 0;
   }

   return 0;
}
