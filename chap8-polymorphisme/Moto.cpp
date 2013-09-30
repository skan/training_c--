#include <iostream>
#include "Moto.h"

using namespace std;

Moto::Moto(int prix, double vitesseMax): Vehicule(prix), m_vitesse(vitesseMax)
{}
Moto::Moto(int prix, int annee, double vitesseMax): Vehicule(prix,annee), m_vitesse(vitesseMax)
{}
Moto::~Moto()
{}
void Moto::affiche() const
{
    cout << "Ceci est une moto allant a " << m_vitesse << " km/h et countant " << m_prix << " euros."  << endl;
}
int Moto::NmbreRoues() const
{
   return 2;
}
