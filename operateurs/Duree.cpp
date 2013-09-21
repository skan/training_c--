#include <iostream>
#include "Duree.h"

using namespace std;

Duree::Duree(int heures, int minutes, int secondes)
   : m_heures(heures), m_minutes(minutes), m_secondes(secondes)
{
}

Duree operator+(Duree const& a, Duree const& b)
{
   Duree copie (a);
   copie +=b;
   return copie;
}

Duree operator+(Duree const& a, int const secondes)
{
   Duree copie (a);
   copie += secondes;
   return copie;
}

Duree& Duree::operator+=(const Duree &duree2)
{
   m_secondes += duree2.m_secondes; // Exceptionnellement autorisé car même classe
   m_minutes += m_secondes / 60;
   m_secondes %= 60; // Exceptionnellement autorisé car même classe
   m_minutes += duree2.m_minutes;
   m_heures += m_minutes / 60;
   m_minutes %= 60;
   m_heures += duree2.m_heures;
   return *this;
}

Duree& Duree::operator+=(const int secondes)
{
   m_secondes += secondes; // Exceptionnellement autorisé car même classe
   m_minutes += m_secondes / 60;
   m_secondes %= 60; // Exceptionnellement autorisé car même classe
   m_heures += m_minutes / 60;
   m_minutes %= 60;
   return *this;
}

Duree operator-(Duree const& a, Duree const& b)
{
   Duree copie (a);
   copie -=b;
   return copie;
}

Duree& Duree::operator-=(const Duree &duree2)
{
   int retenue (0);
   if (m_secondes < duree2.m_secondes)
   {
      m_secondes = 60 - duree2.m_secondes + m_secondes;
      retenue = 1;
   } 
   else
   {
      m_secondes -= duree2.m_secondes;
   }
   if (m_minutes-retenue < duree2.m_minutes)
   {
      m_minutes = 60 - duree2.m_minutes + m_minutes - retenue;
      retenue = 1;
   } 
   else
   {
      m_minutes -= (duree2.m_minutes + retenue);
      retenue = 0;
   }

   if (m_heures-retenue < duree2.m_heures)
   {
      cout << "duree ne peut pas etre negative";
   }
   else
   {
      m_heures -= (duree2.m_heures + retenue);
   }
   return *this;
   }

void Duree::afficher() const
{
   cout << m_heures << ":" << m_minutes << ":" << m_secondes << endl;
}
void Duree::afficher(std::ostream & flux) const
{
   flux << m_heures << "h" << m_minutes << "m" << m_secondes << "s" << endl;
}
	
bool Duree::estEgal(Duree const& b) const
{
   if ((m_secondes == b.m_secondes) && (m_minutes == b.m_minutes) && (m_heures == b.m_heures))
      return 1;
   else
      return 0;
}
bool Duree::estInferieur(Duree const& b) const
{
   if (m_heures < b.m_heures)
      return true;
   else if (m_heures == b.m_heures && m_minutes < b.m_minutes)
      return true;
   else if (m_heures == b.m_heures && m_minutes && b.m_minutes && m_secondes < b.m_secondes)
      return true;
   else
      return false;
}
