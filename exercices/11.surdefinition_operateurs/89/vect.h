#ifndef VECT_H
#define VECT_H
class vect
{ 
   float v [3] ;
   public :
      vect (float c1=0.0, float c2=0.0, float c3=0.0)
      { v[0] = c1 ; v[1] = c2 ; v[2] = c3 ;
      }
      int operator [] (int) const;
      float& operator [] (int);
};
#endif
