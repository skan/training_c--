#include <iostream>
#include "Garage.h"

using namespace std;

/************************************************************************ 
 * Constructeurs et destructeur
 * ************************************************************************/ 
Garage::Garage()
{}

Garage::~Garage()
{
   for (int i(0) ; i < m_contenu.size() ; ++i)
   {
      delete m_contenu[i];
      m_contenu[i]=0;
   }
}

/************************************************************************ 
 * Methodes
 * ************************************************************************/ 

void Garage::ajouter(Vehicule* vehicule)
{
   m_contenu.push_back(vehicule);
}

void Garage::afficher() const
{
   for (int i = 0; i < m_contenu.size ; ++i)
      m_contenu[i]->affiche();
}
