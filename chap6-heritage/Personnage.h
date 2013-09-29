#ifndef DEF_PERSONNAGE
#define DEF_PERSONNAGE

#include <iostream>
#include <string>

class Personnage
{
    public:

    Personnage();
    void recevoirDegats(int nbDegats);
    void afficher() const;
    void coupDePoing(Personnage &cible) const;

    private:

    std::string m_nom;

    protected:

    int m_vie;
};

#endif
