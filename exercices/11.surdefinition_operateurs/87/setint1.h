#ifndef SETINT_H
#define SETINT_H

struct noeud
{
   int valeur;
   noeud* suivant;
};

class set_int
{
   noeud *debut;
   noeud *courant;
   int nelem ; // nombre courant d'éléments

   public :
   set_int (int = 5) ;
   set_int (set_int &) ;
   ~set_int () ;
   int existe ();

   void ajoute (int) ;
   int appartient (int) ;
   int cardinal () ;
   void init ();
   int prochain ();
} ;

#endif
