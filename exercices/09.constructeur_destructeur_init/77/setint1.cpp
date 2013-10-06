#include "setint1.h"
set_int::set_int (int dim)
{ 
   debut = 0;
   nelem = 0 ;
}

set_int::set_int (set_int & e)       // ou : set_int::set_int (const set_int & e)
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
{ noeud * courant = debut ;
   while (courant && (courant->valeur != nb) ) courant = courant->suivant ;
   return (courant != 0) ;
}

int set_int::cardinal ()
{ 
  return nelem ;
}



