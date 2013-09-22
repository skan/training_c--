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

ZFraction& ZFraction::operator*=(const ZFraction &fraction2)
{
   m_nominateur *= fraction2.m_nominateur;
   m_denominateur *= fraction2.m_denominateur;
   return *this;
}
bool ZFraction::isGreaterThan(const ZFraction & fraction2) const
{
   if (m_nominateur*fraction2.m_denominateur < fraction2.m_nominateur*m_denominateur)
      return false;
   else
      return true;
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
ZFraction operator*(ZFraction const& fraction1, ZFraction const& fraction2)
{
   ZFraction copie(fraction1);
   copie *= fraction2;
   return copie;
}
std::ostream& operator<<(std::ostream& stream, ZFraction const& fraction)
{
   fraction.afficher(stream);
   return stream;
}

bool operator>(ZFraction const& fraction1, ZFraction const& fraction2)
{
   if (fraction1.isGreaterThan(fraction2))
      return true;
   else
      return false;
}
