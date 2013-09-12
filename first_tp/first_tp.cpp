#include <iostream>
#include <cmath>

using namespace std;

int carre (int nombre)
{
   int resultat (0);
   resultat = nombre * nombre;
   return resultat;
}

int dessine_rectangle (int height, int width)
{
   int i(0), j(0);
   for (i = 0; i < height; i++)
   {
      for (j = 0; j < width; j++)
      {
         cout << "*";
      }
      cout << endl ;
   }
   return 0;
}

int main()
{
   cout << "firt c++ exercice, addition a + b " << endl;
   int a(0), b(0),c(0);
   int reste;
   cout << "entrez la valeur de a" << endl;
   cin >> a;
   cout << "entrez la valeur de b" << endl;
   cin >> b;
   c = a + b ;
   cout << a << " + " << b << " = " << c << endl;
   reste = a % b;
   c = a / b;
   cout << a << " / " << b << " = " << c << " et il reste : " << reste << endl;
   c = sqrt (a);
   cout << "la racine de " << a << " = " << c << endl;
   c = pow(a,b);
   cout << a << " ^ " << b << " = " << c << endl;
   c = carre (a);
   cout << "le carre de " << a << " = " << c << endl;
   dessine_rectangle(a,b);
   return 0;
}
