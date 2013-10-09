#define <iostream>
using namespace std;

class point
{
      int x, y ;
   public :
      friend void affiche (const point &);
      point (int abs=0, int ord=0)
      { 
         x = abs ; y = ord ;
      }
} ;

