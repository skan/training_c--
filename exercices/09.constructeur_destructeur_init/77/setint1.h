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
   int * adval ;// adresse du tableau des valeurs
   int nelem ; // nombre courant d'éléments

   public :
   set_int (int = 5) ;
   set_int (set_int &) ;
   ~set_int () ;

   void ajoute (int) ;
   int appartient (int) ;
   int cardinal () ;
} ;

#endif
