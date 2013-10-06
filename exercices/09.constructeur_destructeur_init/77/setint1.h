class set_int
{
   int * adval ;// adresse du tableau des valeurs
   int nmax ; // nombre maxi d'éléments
   int nelem ; // nombre courant d'éléments

   public :
   set_int (int = 5) ;
   set_int (set_int &) ;
   ~set_int () ;

   void ajoute (int) ;
   int appartient (int) ;
   int cardinal () ;
} ;

