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
   monGarage.supprimerVehicule(fiesta);
   monGarage.afficher();
#if 0   
   vector<Vehicule*> listeVehicules;
   listeVehicules.push_back(new Voiture(15000, 5));
   listeVehicules.push_back(new Voiture(12000, 3));
   listeVehicules.push_back(new Moto(2000, 212.5));
   listeVehicules.push_back(new Camion(25000, 200));
   listeVehicules.push_back(new Camion(25000, 2012, 200));
   listeVehicules.push_back(new Moto(2000, 2010, 212.5));

   listeVehicules[0]->affiche();
   listeVehicules[1]->affiche();
   listeVehicules[2]->affiche();
   listeVehicules[3]->affiche();
   listeVehicules[4]->afficheAnnee();
   listeVehicules[5]->afficheAnnee();

   for (int i(0); i < listeVehicules.size(); ++i)
   {
      delete listeVehicules[i];
      listeVehicules[i] = 0;
   }
#endif

   return 0;
}
