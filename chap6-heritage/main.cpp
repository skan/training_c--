#include <iostream>
#include <string>
#include "Personnage.h"
#include "Guerrier.h"

using namespace std;


int main()
{
    // Cr�ation des personnages
    Personnage *david(0); 
    Guerrier *mohamed = new Guerrier();
    Guerrier *skander = new Guerrier();

    Guerrier rambo("rambo");

    cout << david << endl;
    cout << skander << endl << endl;

    david = skander;

    cout << david << endl;
    cout << skander << endl;

    skander->afficher();
    skander->afficherVie();
    david->afficher();
    mohamed->afficher();
    rambo.afficher();




#if 0
    david.coupDePoing(skander); // doesn't compile
    skander.coupDePoing(david);
#endif

    return 0;
}
