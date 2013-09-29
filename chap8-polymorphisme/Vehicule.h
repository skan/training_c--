#ifndef TABE_H
#define TABE_H

class Vehicule
{
    public:
    Vehicule(int prix);
    virtual void affiche() const;  //Affiche une description du Vehicule
    virtual ~Vehicule();
 
    protected:
    int m_prix;  //Chaque véhicule a un prix
};

#endif
