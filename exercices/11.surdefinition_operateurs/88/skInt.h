#ifndef SKINT_H
#define SKINT_H

class set_int
{
   public :
      set_int (int = 20) ;
      ~set_int () ;
      set_int & operator < (int) ;
      int operator [] (int) ;
   private:
      int * adval ;
      int nmax ;
      int nelem ;
};

#endif
