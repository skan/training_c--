#include <iostream>
#include <string>
#include "Personnage.h"
#include "Guerrier.h"

using namespace std;


int main()
{
    // Création des personnages
    Personnage *david(0); 
    Guerrier *skander = new Guerrier() ;

    cout << david << endl;
    cout << skander << endl << endl;

    david = skander;

    cout << david << endl;
    cout << skander << endl;

#if 0
    david.coupDePoing(skander); // doesn't compile
    skander.coupDePoing(david);
#endif

    return 0;
}
