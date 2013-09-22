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
   stream << m_nominateur << "/" << m_denominateur << endl;
}

/************************************************************************ 
 * Operators
 * ************************************************************************/ 

std::ostream& operator<<(std::ostream& stream, ZFraction const& fraction)
{
   fraction.afficher(stream);
   return stream;
}
