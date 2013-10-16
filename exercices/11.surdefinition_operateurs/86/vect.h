#ifndef VECT_H
#define VECT_H

class vect
{
   public:
      vect(float c1=0.0, float c2=0.0, float c3=0.0)
      {
         v[0]=c1;
         v[1]=c2;
         v[2]=c3;
      }
      float* operator [] (int i)
      {
         return *(v+i);
      }
      void affiche() const;

   private:
      float v[3];
};

#endif
