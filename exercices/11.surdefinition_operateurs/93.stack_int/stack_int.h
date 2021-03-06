#ifndef STACK_INT_H
#define STACK_INT_H

class stack_int
{
   public:
      stack_int (int m=20);
      stack_int (stack_int &); // constructeur de copie
      ~stack_int ();
      stack_int& operator << (int);
      stack_int& operator >> (int &);
      int operator ++(int);
      int operator --(int);
      void operator =(stack_int&);

   private:
      int *m_tab;
      int indice;
      int max_size;
};

#endif
