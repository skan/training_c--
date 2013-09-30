#include <iostream>
#include <string>
#include "ZString.h"

using namespace std;

int main()
{
   ZString maChaine("skander");
   ZString uneChaine("hamza");

   maChaine.afficher();

   maChaine = uneChaine;
   maChaine.afficher();


    return 0;
}
