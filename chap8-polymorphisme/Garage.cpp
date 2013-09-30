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
   unsigned int i(0);
   for (i=0 ; i < m_contenu.size() ; i++)
   {
      delete m_contenu[i];
      m_contenu[i]=0;
   }
}

/************************************************************************ 
 * Methodes
 * ************************************************************************/ 

void Garage::ajouterVehicule(Vehicule* vehicule)
{
   m_contenu.push_back(vehicule);
}

void Garage::afficher() const
{
   unsigned int i(0);
   for (i=0 ; i < m_contenu.size() ; i++)
   {
      m_contenu[i]->affiche();
      cout << "nombre de roues = " << m_contenu[i]->NmbreRoues() << endl;
   }
}

void Garage::supprimerVehicule(Vehicule *vehiculeAsupprimer)
{
   unsigned int i(0);
   for (i=0 ; i < m_contenu.size() ; i++)
   {
      if (m_contenu[i]==vehiculeAsupprimer)
      {
         delete m_contenu[i];
         m_contenu.erase(m_contenu.begin() + i);
         break;
      }
   }
}
void Garage::methodeGarage()
{
   cout << endl << "ceci est l'appel d'une methode statique" << endl;
}

int Garage::attributGarage = 5;
