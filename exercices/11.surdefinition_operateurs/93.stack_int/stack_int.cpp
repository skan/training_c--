#include <iostream>
#include "stack_int.h"
#include "stdlib.h"
using namespace std;

/************************************************************************ 
 * Destructor & Constructor
 * ************************************************************************/ 
stack_int::stack_int(int m)
{
   m_tab = new int [max_size = m];
   indice = 0;
   for (int i = 0; i < max_size ; i++) m_tab[i]=0;
}

stack_int::~stack_int()
{
   delete m_tab;
}

stack_int::stack_int(stack_int & e)
{
   indice = e.indice;
   m_tab = new int [max_size = e.max_size];
   for (int i = 0; i < max_size ; i++) 
   {
      *(m_tab+i)=*(e.m_tab+i);
   }
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
   }
   return *this;
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

int stack_int::operator++ (int a)
{
   if (indice == max_size) return 1;
   else return 1;
}

int stack_int::operator-- (int a)
{
   if (indice == 0) return 0;
   else return 0;
}

void stack_int::operator = (stack_int &e)
{
   cout << "affectation pas authorisee" << endl;
   exit (1);
}
