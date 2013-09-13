#include <iostream>
#include "fonctions.h"
#include <vector>
using namespace std;

double moyenne (vector <double> const& tableau);

// Main
int main()
{
   int i;
   int tailleTableau (4);
   double temp;
   vector <double> notes;
   cout << "nombre de valeur a saisir: " << endl;
   cin >> tailleTableau;
   for (i = 0; i < tailleTableau; i++)
   {
      cout << "saisir l'élement numero " << i << endl;
      cin >> temp;
      notes.push_back(temp);
   }
   cout << "la moyenne est " << moyenne(notes) << endl;

   return 0;
}

// Définition de la fonction
int nombreDeSecondes(int heures, int minutes, int secondes)
{
   int total = 0;
   total = heures * 60 * 60;
   total += minutes * 60;
   total += secondes;
   return total;
}

double moyenne (vector <double> const& tableau)
{
   int i(0); 
   double somme (0);
   for (i = 0; i < (int)tableau.size() ; i++)
   {
      somme += tableau [i];
   }
   return somme / tableau.size();
}
