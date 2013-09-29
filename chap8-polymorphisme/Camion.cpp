#include <iostream>
#include "Camion.h"

using namespace std;

Camion::Camion(int prix, int poids): Vehicule(prix), m_poids(poids) 
{}
Camion::Camion(int prix,int annee, int poids): Vehicule(prix,annee), m_poids(poids) 
{}
Camion::~Camion()
{}
void Camion::affiche() const
{
    cout << "Ceci est un Camion pesant " << m_poids << " Kg et coutant " << m_prix << " euros."  << endl;
}
