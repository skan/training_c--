#include <iostream>
using namespace std;

struct point
{
   char c;
   int x,y;
};

void afficher_par_valeur (point );
void afficher_par_reference (point &);
void afficher_par_addresse (point *);

int main ()
{
   point a = {'S',10,25};

   //point* b = new point {'B', 2,23};

   afficher_par_valeur(a);
   afficher_par_reference(a);
   afficher_par_addresse(&a);

   //afficher_par_addresse(&b);

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
