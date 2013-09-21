#include <iostream>
#include "fichiers.h"
#include <fstream>
#include <string>
using namespace std;
// Main
int main()
{
   string const nomFichier("scores.txt");
   ofstream monFlux (nomFichier.c_str(),ios::app);
   string MonNom;
   int MonAge(0);
   bool IsNotEndOfFile(true);
   string ligne;
   cout << "quel est mon nom ? : " << endl;
   cin >> MonNom;
   cout << "quel est mon age ? : " << endl;
   cin >> MonAge;
   if (monFlux)
   {
      cout << "Info: File opened successfully" << endl;
      monFlux << "Hello world dans fichier" << endl;
      monFlux << "Mon nom est " << MonNom.c_str() << " et mon age est : " << MonAge << endl;
   }
   else
   {
      cout << "Error: unable to open file" << endl;
   }
   ifstream monFluxRead (nomFichier.c_str());
   if (monFlux)
   {
      cout << "Info: File opened successfully" <<  endl;
      while (IsNotEndOfFile)
      {
         IsNotEndOfFile = getline (monFluxRead, ligne);
         cout << "ligne lu : " << ligne << endl;
         cout << "IsNotEndOfFile = " << IsNotEndOfFile << endl;
      }
   }
   else
   {
      cout << "Error: unable to open file" << endl;
   }
   return 0;
}

// Définition de la fonction
