#include <iostream>
using namespace std;
#include "Schar.h"

Schar::Schar(const char *input)
{
   int i(0);
   while(input[i])
   {
      m_char[i]=input[i];
      i++;
   }
   m_char[i]='\0';
   m_cardinal=i;
}

void Schar::afficher() const
{
   cout << "ma chaine est " << m_char << endl;
}

int Schar::getCardinal() const
{
   return m_cardinal;
}

int Schar::chercher(char c) const
{
   int i(0);
   while (i < m_cardinal)
   {
      if (m_char[i] == c)
         return 1;
      i++;
   }
   return 0;
}
