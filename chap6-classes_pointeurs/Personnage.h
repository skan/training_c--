#ifndef DEF_PERSONNAGE
#define DEF_PERSONNAGE

#include <iostream>
#include <string>
#include "Arme.h"

class Personnage
{
    public:

    Personnage();
    Personnage(std::string nomArme, int degatsArme);
    Personnage(Personnage const& personnageACopier);
    ~Personnage();
    void recevoirDegats(int nbDegats);
    void attaquer(Personnage &cible);
    void boirePotionDeVie(int quantitePotion);
    void changerArme(std::string nomNouvelleArme, int degatsNouvelleArme);
    bool estVivant();
    void afficherEtat();
    Personnage& operator=(Personnage const& personnageACopier);
    Personnage* getAdresse() const;

    private:

    int m_vie;
    int m_mana;
    Arme *m_arme; //l'arme est un pointeur, l'object n'est plus contenu dans le personnage
};

#endif
