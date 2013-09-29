#ifndef DEF_PERSONNAGE
#define DEF_PERSONNAGE

#include <iostream>
#include <string>

class Personnage
{
    public:

    Personnage();
    Personnage(std::string nom);
    void recevoirDegats(int nbDegats);
    void afficher() const;
    void coupDePoing(Personnage &cible) const;

    protected:

    int m_vie;
    std::string m_nom;
};

#endif
