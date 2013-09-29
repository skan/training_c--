#include "Personnage.h"

using namespace std;


/************************************************************************ 
 * Constructeurs
 * ************************************************************************/ 
Personnage::Personnage() : m_vie(100), m_nom("Jack")
{
}

Personnage::Personnage(std::string nom) : m_vie(100), m_nom(nom)
{
}
/************************************************************************ 
 * Methodes
 * ************************************************************************/ 
void Personnage::recevoirDegats(int nbDegats)
{
    m_vie -= nbDegats;

    if (m_vie < 0)
    {
        m_vie = 0;
    }
}

void Personnage::coupDePoing(Personnage &cible) const
{
    cible.recevoirDegats(10);
}

void Personnage::afficher() const
{
   cout << "Afficher Personnage" << endl;
   cout << "   nom: " << m_nom << endl;
   cout << "   vie: " << m_vie << endl;
}
