#ifndef TABE_H
#define TABE_H

class Vehicule
{
    public:
    Vehicule(int prix);
    Vehicule(int prix, int annee);
    virtual void affiche() const;  //Affiche une description du Vehicule
    virtual void afficheNmbreRoues() const;  //Affiche le nombre de roues du Vehicule
    void afficheAnnee() const;
    virtual ~Vehicule();
 
    protected:
    int m_prix;  //Chaque véhicule a un prix
    int m_annee;
};

#endif
