#ifndef POINT_H
#define POINT_H

class point
{
   public:
      point (int abs=0, int ord=0)
      { 
         x = abs ; y = ord ;
      }
      friend void affiche (const point &);
   private:
      int x, y ;
} ;

#endif
