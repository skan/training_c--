#ifndef DEF_DUREE
#define DEF_DUREE

class Duree
{
    public:

    Duree(int heures = 0, int minutes = 0, int secondes = 0);
    Duree& operator+=(const Duree &duree);
    Duree& operator+=(const int secondes);
    Duree& operator-=(const Duree &duree2);
    void afficher() const;
    void afficher(std::ostream & flux) const;
    bool estEgal(Duree const& b) const;
    bool estInferieur(Duree const& b) const;

    private:

    int m_heures;
    int m_minutes;
    int m_secondes;
};

Duree operator+(Duree const& a, Duree const& b);
Duree operator+(Duree const& a, int const secondes);
Duree operator-(Duree const& a, Duree const& b);


#endif
