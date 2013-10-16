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
   set_int (set_int const &) ;
   ~set_int () ;
   int existe ();
#if 0
   void operator = (const set_int &);
#endif
   set_int & operator = (const set_int &); // affectation multiple

   void ajoute (int) ;
   int appartient (int) ;
   int cardinal () ;
   void init ();
   int prochain ();
} ;

#endif
