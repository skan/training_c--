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
   Moto *harley = new Moto(5000, 2010, 380);
   monGarage.ajouterVehicule(new Voiture(12000,5));
   monGarage.ajouterVehicule(fiesta);
   monGarage.ajouterVehicule(harley);
   monGarage.afficher();
   monGarage.supprimerVehicule(fiesta);
   monGarage.afficher();

   return 0;
}
