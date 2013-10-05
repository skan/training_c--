#include <iostream>
using namespace std;

struct point
{
   char c;
   int x,y;
};

point oppose(point const &point);
void afficher (point const &a);

int main ()
{
   point a {'A', 2, 3};

   afficher(a);
   afficher(oppose(a)); 

   return 0;
}

void afficher (point const &a)
{
   cout << "Point " << a.c << " de coordonnees " << a.x << " et " << a.y << endl;
   return;
}

point oppose (point const &a)
{
   point b;

   b.x = a.x * -1;
   b.y = a.y * -1;
   b.c= a.c;

   return b;

}


