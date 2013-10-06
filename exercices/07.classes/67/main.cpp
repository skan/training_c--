#include <iostream>
#include <cstring>
using namespace std;
#include "Schar.h"
#include "set_char.h"

int main()
{
   cout << "utilisation de ma version " << endl;
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
   }
   
   cout << "utilisation de set_char " << endl;
   {
      set_char ens ;
      char mot [81] ;
      cout << "donnez un mot " ;
      cin >> mot ;
      int i ;
      for (i=0 ; i<strlen(mot) ; i++) ens.ajoute (mot[i]) ;
      cout << "il contient " << ens.cardinal () << " caractères différents" ;
      if (ens.appartient('e')) cout << "le caractère e est présent\n" ;
      else cout << "le caractère e n'est pas présent\n" ;
   }


   return 0;
}
