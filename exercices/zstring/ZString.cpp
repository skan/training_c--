#include <iostream>
#include <cstddef>
#include "ZString.h"

using namespace std;

/************************************************************************ 
 * Constructeur & Destructeur
 * ************************************************************************/ 
ZString::ZString() : m_chaine(0), m_longueur(0)
{}

ZString::ZString(const char *chaine)
{
   m_longueur = longueur(chaine);
   m_chaine = copie(chaine);
}

ZString::ZString(const ZString &chaine)
{
   m_chaine = copie(chaine.m_chaine);
   m_longueur = chaine.m_longueur;
}

ZString::~ZString() 
{
   delete m_chaine;
}
/************************************************************************ 
 * Public methods
 * ************************************************************************/ 
void ZString::afficher()
{
   cout << m_chaine << endl;
}

ZString ZString::operator=(const char *chaine)
{
   delete m_chaine;
   m_chaine = copie(chaine);
   m_longueur = longueur (chaine);
   return *this;
}

ZString ZString::operator=(const ZString &chaine)
{
   delete m_chaine;
   m_chaine = copie(chaine.m_chaine);
   m_longueur = chaine.m_longueur;
   return *this;
}

/************************************************************************ 
 * Private methods
 * ************************************************************************/ 

int ZString::longueur (const char *chaine)
{
   int i(0);
   while (chaine[i] != '\0')
   {
      i++;
   }
   return i;
}

char* ZString::copie(const char *chaine)
{
   int taille = longueur (chaine);
   int i(0);
   char *chaineCopie = new char [taille + 1]; 

   for (i = 0; i < taille ; i++)
   {
      chaineCopie[i] = chaine[i];
   }
   chaineCopie[taille]='\0';

   return chaineCopie;
}

