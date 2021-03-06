#ifndef MOTO_H
#define MOTO_H

#include "Vehicule.h"

class Moto : public Vehicule  //Une Moto EST UN Vehicule
{
    public:
    Moto(int prix, double vitesseMax);
    Moto(int prix, int annee, double vitesseMax);
    virtual void affiche() const;
    virtual int NmbreRoues() const;  //retourne le nombre de roues du Vehicule
    virtual ~Moto();
  
    private:
    double m_vitesse;  //La vitesse maximale de la moto
};

#endif
