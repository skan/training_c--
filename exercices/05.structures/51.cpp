#include <iostream>
using namespace std;

const int LG_NOM = 30 ;

struct date
{
   int jour ;
   int mois ;
   int annee ;
} ;

struct personne
{ 
   char nom [LG_NOM+1] ;
   struct date date_embauche ;
   struct date date_poste ;
} ;

void fill_new(personne &);

int main()
{
   personne sk;
   fill_new(sk);
   return 0;
}

void fill_new(personne &a)
{
   char reponse;
   cout << "nom : " ;
   cin >> a.nom;
   cout << "date embauche (a) : " ;
   cin >> a.date_embauche.jour;
   cin >> a.date_embauche.mois;
   cin >> a.date_embauche.annee;
   do 
   {
      cout << "date poste = date embauche ? (O/N) ";
      cin >> reponse;
   }while (reponse != 'O' && reponse != 'N');

   if (reponse == 'O')
   {
      a.date_poste.jour = a.date_embauche.jour;
      a.date_poste.mois = a.date_embauche.mois;
      a.date_poste.annee = a.date_embauche.annee;
   }
   else
   {
      cout << "date poste : " ;
      cin >> a.date_poste.jour;
      cin >> a.date_poste.mois;
      cin >> a.date_poste.annee;
   }
}
