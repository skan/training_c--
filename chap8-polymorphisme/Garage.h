#ifndef GARAGE_H
#define GARAGE_H

#include "Garage.h"
#include "Vehicule.h"

class Garage 
{
   public:
   void ajouter(Vehicule vehicule);
  
   private:
   vector <Vehicule*> m_contenu;
};

#endif
