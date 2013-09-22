#include <iostream>
using namespace std;
#include "ZFraction.h"

ZFraction::ZFraction() : m_nominateur(0), m_denominateur(1)
{
}

ZFraction::ZFraction(int nominateur): m_nominateur(nominateur), m_denominateur(1)
{
}

ZFraction::ZFraction(int nominateur, int denominateur) : m_nominateur(nominateur), m_denominateur(denominateur)
{
}

void ZFraction::afficher() const
{
   cout << m_nominateur << "/" << m_denominateur << endl;
}

void ZFraction::afficher(std::ostream& stream) const
{
   stream << m_nominateur << "/" << m_denominateur;
}

ZFraction& ZFraction::operator+=(const ZFraction &fraction2)
{
   if (fraction2.m_denominateur == m_denominateur)
   {
      m_nominateur += fraction2.m_nominateur;
   }
   else 
   {
      m_nominateur = (m_nominateur*fraction2.m_denominateur) + (m_denominateur*fraction2.m_nominateur);
      m_denominateur *= fraction2.m_denominateur;
   }
   return *this;
}


/************************************************************************ 
 * Operators
 * ************************************************************************/ 
ZFraction operator+(ZFraction const& fraction1, ZFraction const& fraction2)
{
   ZFraction copie(fraction1);
   copie += fraction2;
   return copie;
}
std::ostream& operator<<(std::ostream& stream, ZFraction const& fraction)
{
   fraction.afficher(stream);
   return stream;
}
