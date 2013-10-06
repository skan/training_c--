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
   return 0;
}
