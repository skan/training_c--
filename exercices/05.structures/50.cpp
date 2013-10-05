#include <iostream>
using namespace std;

const int NB = 5;

struct point
{
   char c;
   int x,y;
};

void afficher (point *a);

int main ()
{
   point courbe[NB];
   afficher(courbe);

   return 0;
}

void afficher (point *a)
{
   int i(0);
   for (i= 0; i < NB; i++)
      cout << "Point " << a[i].c << " de coordonnees " << a[i].x << " " << a[i].y << endl;
   return;
}

