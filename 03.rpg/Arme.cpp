#include "Arme.h"
 
using namespace std;
 
Arme::Arme() : m_nom ("Arme Rouillée"), m_degats (10)
{
}

Arme::Arme (string monArme, int ArmeDegats) : m_nom (monArme), m_degats(ArmeDegats)
{
}

void Arme::changer(std::string nom, int degats)
{
   m_arme = nom;
   m_degats = degats;
}

void Arme::afficher() const
{
   cout << "L'arme utilisée actuellement est : " << m_arme << endl;
}

int getDegats() const
{
   return m_degats;
}
