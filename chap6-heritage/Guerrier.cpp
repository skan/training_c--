#include <iostream>
#include <string>
#include "Guerrier.h"
  
using namespace std;

Guerrier::Guerrier() : Personnage(), m_puissance(100)
{
}
Guerrier::Guerrier(std::string nom) : Personnage(nom), m_puissance(100)
{
}
  
void Guerrier::afficherVie() const
{
   cout << "le cota de vie du guerrier est " << m_vie << endl;
}

void Guerrier::afficher() const
{
   Personnage::afficher();
   cout << "   je suis un guerrier redoutable" << endl;
}
