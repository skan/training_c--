#include <iostream>
using namespace std;

struct point
{
   char c;
   int x,y;
};

void afficher_par_valeur (point a);
void afficher_par_reference (point &a);
void afficher_par_addresse (point *a);

int main ()
{
   point a;

   a.c = 's';
   a.x = 10;
   a.y = 25;

   afficher_par_valeur(a);
   afficher_par_reference(a);
   afficher_par_addresse(&a);

   return 0;
}

void afficher_par_valeur (point a)
{
   cout << "Par valeur: \tpoint " << a.c << " de coordonnees " << a.x << " " << a.y << endl;
}

void afficher_par_reference (point &a)
{
   cout << "Par addresse: \tpoint " << a.c << " de coordonnees " << a.x << " " << a.y << endl;
}

void afficher_par_addresse (point *a)
{
   cout << "Par reference: \tpoint " << a->c << " de coordonnees " << a->x << " " << a->y << endl;
}
