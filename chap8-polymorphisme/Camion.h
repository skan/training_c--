#ifndef CAMION_H
#define CAMION_H

#include "Vehicule.h"

class Camion : public Vehicule  //Une Moto EST UN Vehicule
{
    public:
    Camion(int prix, int poids);
    Camion(int prix, int annee, int poids);
    virtual void affiche() const;
    virtual int NmbreRoues() const;  //retourne le nombre de roues du Vehicule
    virtual ~Camion();
  
    private:
    int m_poids;  //La vitesse maximale de la moto
};

#endif
