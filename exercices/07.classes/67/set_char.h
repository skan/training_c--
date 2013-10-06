#ifndef SET_CHAR_H
#define SET_CHAR_H

/* déclaration de la classe set_char */
#define N_CAR_MAX 256
// on pourrait utiliser UCHAR_MAX défini dans <limits.h>


class set_char
{
   unsigned char ens [N_CAR_MAX] ;
   public :
   set_char () ;
   void ajoute (unsigned char) ;
   int appartient (unsigned char) ;
   int cardinal () ;
} ;

#endif
