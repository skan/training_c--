#ifndef GARAGE_H
#define GARAGE_H

#include <vector>
#include "Vehicule.h"

class Garage 
{
   public:

   Garage();
   ~Garage();
   void ajouterVehicule(Vehicule *newVehicule);
   void supprimerVehicule(Vehicule *newVehicule);
   void afficher() const;
  
   private:

   std::vector <Vehicule*> m_contenu;
};

#endif
