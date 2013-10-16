#ifndef VECT_H
#define VECT_H
class vect
{ 
   public :
      vect (int taille = 1)
      { 
         v = new float [taille];
         size = taille;
      }
      int operator [] (int) const;
      float& operator [] (int);
   private:
      float *v ;
      int size;
};
#endif
