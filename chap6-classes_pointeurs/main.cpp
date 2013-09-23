#include <iostream>
#include <string>
#include "Personnage.h"

using namespace std;


int main()
{
    // Cr�ation des personnages
    Personnage david, goliath("Ep�e aiguis�e", 20);
    Personnage skander(david);

    // Au combat !
    goliath.attaquer(david);
    david.boirePotionDeVie(20);
    goliath.attaquer(david);
    david.attaquer(goliath);
    goliath.changerArme("Double hache tranchante v�n�neuse de la mort", 40);
    goliath.attaquer(david);

    // Temps mort ! Voyons voir la vie de chacun...
    cout << "David" << endl;
    david.afficherEtat();
    cout << endl << "Goliath" << endl;
    goliath.afficherEtat();

    cout << "skander" << endl;
    skander.afficherEtat();
    david.attaquer(skander);
    skander=goliath;
    cout << "skander apres attaque et copie" << endl;
    skander.afficherEtat();

    return 0;
}
