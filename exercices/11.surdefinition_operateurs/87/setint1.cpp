#include "setint1.h"
set_int::set_int (int dim)
{ 
   debut = 0;
   nelem = 0 ;
}

set_int::set_int (set_int const & e)       // ou : set_int::set_int (const set_int & e)
{
   nelem = e.nelem ; // création d'une nouvelle liste identique à l'ancienne
   noeud * adsource = e.debut ;
   noeud * adbut ;
   debut = 0 ;
   while (adsource)
   {
      adbut = new noeud ;  // création nouveau nœud
      adbut->valeur = adsource->valeur ; // copie valeur
      adbut->suivant = debut ; // insertion nouveau nœud 
      debut = adbut ;   // dans nouvelle liste
      adsource = adsource->suivant ; // nœud suivant ancienne liste
   }
}

set_int::~set_int ()
{
   noeud * adn ;
   noeud * courant = debut ;
   while (courant)
   { 
      adn = courant ;
      courant = courant->suivant ;
      delete adn;
   }
}

void set_int::ajoute (int nb)
{
   if (!appartient (nb))
   {
      nelem ++;
      noeud *actuel = new noeud;
      actuel->valeur = nb;
      actuel->suivant = debut;
      debut = actuel;
   }
}

int set_int::appartient (int nb)
{ 
   noeud * courant = debut ;
   while (courant && (courant->valeur != nb) ) courant = courant->suivant ;
   return (courant != 0) ;
}

int set_int::cardinal ()
{ 
  return nelem ;
}


void set_int::init ()
{
   courant = debut ;
}
int set_int::prochain ()
{ 
   if (courant)
   {
      int val = courant->valeur ;
      courant = courant->suivant ;
      return val ;
   }
   else return 0 ;
}
int set_int::existe ()
{ 
   return (courant != 0) ;
}

void set_int::operator = (const set_int &e)
{
   if (this == &e) // affectation du meme objet
   {
      return;
   }
   else
   {
      noeud * adsource = e.debut ;
      noeud *toClean = courant->suivant;
      courant = debut;

      while (adsource)
      {
         if (courant != 0)
         {
            //debut = courant;
            courant->valeur = adsource->valeur;
            if (adsource->suivant == 0)
            {
               toClean = courant->suivant;
               courant->suivant=0;
            }
            courant = courant->suivant;

         }
         else
         {
            nelem ++;
            noeud *courant = new noeud;
            courant->valeur = adsource->valeur;
            courant->suivant = debut;
            debut = courant;
         }
         adsource = adsource->suivant ; // nœud suivant ancienne liste
      }
      
#if 1
      if (nelem > e.nelem) // effacer les structures en trop
      {
         nelem = e.nelem;
         while (toClean != 0)
         {
            noeud *adn = toClean;
            toClean = toClean->suivant;
            delete adn;
         }
      }
#endif
   }
}
