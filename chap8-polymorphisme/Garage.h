#ifndef GARAGE_H
#define GARAGE_H

#include <vector>
#include "Vehicule.h"

class Garage 
{
   public:

   Garage();
   ~Garage();
   void ajouter(Vehicule *vehicule);
   void afficher() const;
  
   private:

   std::vector <Vehicule*> m_contenu;
};

#endif
