#include <iostream>
#include "Duree.h"

using namespace std;

int main()
{
    Duree duree1(3, 10, 2), duree2(3, 3, 27);
    Duree resultat;

    duree1.afficher();
    cout << "-" << endl;
    duree2.afficher();

    resultat = duree1 - duree2;
    cout << "=" << endl;
    resultat.afficher();

    return 0;
}



