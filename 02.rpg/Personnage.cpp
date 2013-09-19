#include "Personnage.h"
 
using namespace std;
 
Personnage::Personnage() : m_vie(100), m_mana(100), m_nomArme("Epée rouillee"), m_degatsArme(10)
{
}
Personnage::Personnage(string nomArme, int degatsArme) : m_vie(100), m_mana(100),m_nomArme(nomArme), m_degatsArme(degatsArme)
{  
}
Personnage::Personnage(int maVie, int monMana, string nomArme, int degatsArme) : m_vie(maVie), m_mana(monMana),m_nomArme(nomArme), m_degatsArme(degatsArme)
{
}
Personnage::~Personnage()
{
}

void Personnage::recevoirDegats(int nbDegats)
{
    m_vie -= nbDegats;
    //On enlève le nombre de dégâts reçus à la vie du personnage
 
    if (m_vie < 0) //Pour éviter d'avoir une vie négative
    {
        m_vie = 0; //On met la vie à 0 (cela veut dire mort)
    }
}
 
void Personnage::attaquer(Personnage &cible)
{
    cible.recevoirDegats(m_degatsArme);
    //On inflige à la cible les dégâts que cause notre arme
}
 
void Personnage::boirePotionDeVie(int quantitePotion)
{
    m_vie += quantitePotion;
 
    if (m_vie > 100) //Interdiction de dépasser 100 de vie
    {
        m_vie = 100;
    }
}
 
void Personnage::changerArme(string nomNouvelleArme, int degatsNouvelleArme)
{
    m_nomArme = nomNouvelleArme;
    m_degatsArme = degatsNouvelleArme;
}
 
bool Personnage::estVivant() const
{
    if (m_vie > 0) // Plus de 0 de vie ?
    {
        return true; //VRAI, il est vivant !
    }
    else
    {
        return false; //FAUX, il n'est plus vivant !
    }
}
