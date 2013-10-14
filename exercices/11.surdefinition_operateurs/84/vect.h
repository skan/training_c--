#ifndef VECT_H
#define VECT_H

#define USE_MEMBER_FCT 1
class vect
{
   public:
      vect(float c1=0.0, float c2=0.0, float c3=0.0)
      {
         x = c1; y = c2 ; z = c3;
      }
#if USE_MEMBER_FCT
      vect& operator = (vect const);
#else
      friend void operator = (vect &, vect const);
#endif
      void affiche() const;

   private:
      float x,y,z;
};

#endif
