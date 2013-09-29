#include <iostream>
#include <string>
#include "Vehicule.h"
#include "Moto.h"
#include "Voiture.h"

using namespace std;

int main()
{
   Vehicule v;
   v.affiche();   

   Moto m;
   m.affiche();

   return 0;
}
