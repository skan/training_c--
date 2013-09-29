#ifndef DEF_GUERRIER
#define DEF_GUERRIER
  
#include <iostream>
#include <string>
#include "Personnage.h"
//Ne pas oublier d'inclure Personnage.h pour pouvoir en hériter !
  
class Guerrier : public Personnage
//Signifie : créer une classe Guerrier qui hérite de la classe Personnage
{
   public:

   Guerrier();
   void frapperCommeUnSourdAvecUnMarteau() const; //Méthode qui ne concerne que les guerriers

   private:
   
   int m_puissance;
};
  
#endif
