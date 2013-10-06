#include <iostream>
using namespace std;
#include "Schar.h"

int main()
{
   Schar s("skander");
   s.afficher();
   cout << s.getCardinal() << endl;
   cout << s.chercher('s') << endl;
   cout << s.chercher('f') << endl;
   s.ajouter(' ');
   s.ajouter('h');
   s.afficher();
   cout << s.getCardinal() << endl;
   return 0;
}
