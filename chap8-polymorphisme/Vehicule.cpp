#include <iostream>
#include "Vehicule.h"

using namespace std;

Vehicule::Vehicule(int prix) : m_prix(prix), m_annee(2013)
{}
Vehicule::Vehicule(int prix, int annee) : m_prix(prix), m_annee(annee)
{}
Vehicule::~Vehicule()
{}

void Vehicule::affiche() const
{
    cout << "Ceci est un vehicule coutant " << m_prix << "euros" << endl;
}
void Vehicule::afficheAnnee() const
{
   cout << "ce vehicule est fabrique en " << m_annee << endl;
}
