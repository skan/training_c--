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

Duree& Duree::operator+=(const Duree &duree2)
{
   m_secondes += duree2.m_secondes; // Exceptionnellement autoris� car m�me classe
   m_minutes += m_secondes / 60;
   m_minutes += duree2.m_minutes;
   m_heures += m_minutes / 60;
   m_minutes %= 60;
   m_heures += duree2.m_heures;
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
