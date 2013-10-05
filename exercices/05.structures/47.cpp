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
   point a = {'A',10,25};
#if 0
   point *b =new point {'B',32,51}; 
#else
   point *b =new point; 
   b->c = 'B';
   b->x = 32;
   b->y = 2;
#endif
   afficher_par_valeur(a);
   afficher_par_reference(a);
   afficher_par_addresse(&a);
   afficher_par_valeur(a);

   cout << endl;

   afficher_par_addresse(b);
   afficher_par_reference(*b);

   delete b;

   return 0;
}

void afficher_par_valeur (point a)
{
   cout << "Par valeur: \tpoint " << a.c << " de coordonnees " << a.x << " " << a.y << endl;
   a.x=99;
}

void afficher_par_reference (point &a)
{
   cout << "Par addresse: \tpoint " << a.c << " de coordonnees " << a.x << " " << a.y << endl;
}

void afficher_par_addresse (point *a)
{
   cout << "Par reference: \tpoint " << a->c << " de coordonnees " << a->x << " " << a->y << endl;
}
