#include <iostream>
using namespace std;

const int NB = 3;

struct point
{
   char c;
   int x,y;
};

void afficher (point *a);
void remplir (point *a);

int main ()
{
   point courbe[NB];
   remplir(courbe);

   return 0;
}

void remplir (point *a)
{
   int i(0);
   for (i= 0; i < NB; i++)
   {
      cout << "point numero " << i << endl;
      cout << "\t nom: ";
      cin >> a[i].c;
      cout << "\t x: ";
      cin >> a[i].x;
      cout << "\t y: ";
      cin >> a[i].y;
   }
   afficher (a);
}

void afficher (point *a)
{
   int i(0);
   for (i= 0; i < NB; i++)
      cout << "Point " << a[i].c << " de coordonnees " << a[i].x << " " << a[i].y << endl;
   return;
}

