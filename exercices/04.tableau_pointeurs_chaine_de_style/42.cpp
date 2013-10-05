#include <iostream>
using namespace std ;
int main()
{ 
   int i(0);
   int nmbreValeurs(0);
   
   do
   {
      cout << "nombre de valeurs dans tableau : " ;
      cin >> nmbreValeurs;
   }while (nmbreValeurs <= 0);

   int *t1_p = new int[nmbreValeurs]; // declaration du premier tableau
   for (i = 0 ; i < nmbreValeurs ; i++) cin >> *(t1_p + i); // remplissage du premier tableau
   int *t2_p = new int[nmbreValeurs]; // Declaration du tableau des carres
   for (i = 0 ; i < nmbreValeurs ; i++) *(t2_p + i) = *(t1_p + i) * *(t1_p + i); // calcul des carres et remplissage du second tableau

   // affichage du contenu des deux tableaux  
   for (i = 0 ; i < nmbreValeurs ; i++) 
   {
      cout << *(t1_p + i) << "|" << *(t2_p + i) << endl;
   }

   // freeing memory
   delete t1_p;
   delete t2_p;

   return 0;
   
}
