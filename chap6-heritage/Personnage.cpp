
#include "Personnage.h"


using namespace std;


/************************************************************************ 
 * Constructeurs
 * ************************************************************************/ 
Personnage::Personnage() : m_vie(100), m_nom("Jack")
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

