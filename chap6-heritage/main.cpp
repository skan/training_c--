#include <iostream>
#include <string>
#include "Personnage.h"
#include "Guerrier.h"

using namespace std;


int main()
{
    // Cr�ation des personnages
    Personnage david; 
    Guerrier skander;

    david.coupDePoing(skander);
    skander.coupDePoing(david);

    return 0;
}
