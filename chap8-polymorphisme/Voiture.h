#ifndef VOITURE_H
#define VOITURE_H

#include "Vehicule.h"
 
class Voiture : public Vehicule //Une Voiture EST UN Vehicule
{
    public:
    Voiture(int prix, int portes);
    Voiture(int prix, int annee, int portes);
    virtual void affiche() const;
    virtual int NmbreRoues() const;  //retourne le nombre de roues du Vehicule
    virtual ~Voiture();
 
    private:
    int m_portes;  //Le nombre de portes de la voiture
};
 
#endif
