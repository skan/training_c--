#include <iostream>
#include "Voiture.h"

using namespace std;

Voiture::Voiture(int prix, int portes) : Vehicule(prix), m_portes(portes)
{}
Voiture::Voiture(int prix, int annee, int portes) : Vehicule(prix,annee), m_portes(portes)
{}
Voiture::~Voiture()
{}

void Voiture::affiche() const
{
    cout << "Ceci est une voiture avec " << m_portes << " portes" << "et coutant " << m_prix << " euros" << endl;
}

int Voiture::NmbreRoues() const
{
   return 4;
}
