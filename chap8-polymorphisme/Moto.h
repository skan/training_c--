#ifndef MOTO_H
#define MOTO_H

#include "Vehicule.h"

class Moto : public Vehicule  //Une Moto EST UN Vehicule
{
    public:
    void affiche() const;
  
    private:
    double m_vitesse;  //La vitesse maximale de la moto
};

#endif
