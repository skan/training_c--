#include "stack_int.h"

/************************************************************************ 
 * Destructor & Constructor
 * ************************************************************************/ 
stack_int::stack_int(int m)
{
   m_tab = new int [max_size = m];
   indice = 0;
}

stack_int::~stack_int()
{
   delete m_tab;
}

/************************************************************************ 
 * Operators
 * ************************************************************************/ 

stack_int & stack_int::operator << (int nb)
{
   if (indice < max_size)
   {
      *(m_tab + indice) = nb;
      indice++;
      return *this;
   }
}

stack_int& stack_int::operator >> (int &n)
{
   if (indice != 0)
   {
      n = *(m_tab + indice -1);
      indice--;
   }
   return *this;
}
