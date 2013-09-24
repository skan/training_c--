#include <iostream>
#include <string>
#include "Personnage.h"
#include "Guerrier.h"

using namespace std;


int main()
{
    // Création des personnages
    Personnage david; 
    Guerrier skander;

    david.coupDePoing(skander);
    skander.coupDePoing(david);

    return 0;
}
