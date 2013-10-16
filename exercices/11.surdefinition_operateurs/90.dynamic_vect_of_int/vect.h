#ifndef VECT_H
#define VECT_H
class vect
{ 
   public :
      vect (int taille = 1)
      { 
         v = new float [size=taille];
         for (int i = 0; i< size; i++)
            v[i]=0;
      }
      ~vect()
      {
         delete v;
      }
      int operator [] (int) const;
      float& operator [] (int);
   private:
      float *v ;
      int size;
};
#endif
