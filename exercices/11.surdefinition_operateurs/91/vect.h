#ifndef VECT_H
#define VECT_H
class vect
{ 
   public :
      vect (int,int);
      ~vect();
      int& operator () (int,int);
   private:
      int *v;
      int size;
      int nb_col;
};
#endif
