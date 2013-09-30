#include <iostream>
#include <string>
#include <vector>
#include "Garage.h"
#include "Vehicule.h"
#include "Moto.h"
#include "Voiture.h"
#include "Camion.h"

using namespace std;

void presenter(Vehicule const& v) ///Presente le vehicule passé en argument
{
   v.affiche();
}

int main()
{
   Garage monGarage;
   Voiture *fiesta = new Voiture(25000, 2010, 3);
   monGarage.ajouterVehicule(new Voiture(12000,5));
   monGarage.ajouterVehicule(fiesta);
   monGarage.afficher();
   //monGarage.supprimerVehicule(fiesta);
   //monGarage.afficher();

   fiesta->afficheNmbreRoues();

   return 0;
}
