#include <iostream>
using namespace std;

const int MOIS=12;
struct enreg
{
   int stock;
   float prix;
   int ventes[MOIS];
};

void raz (enreg &);
void afficher (enreg const &a);

int main ()
{
   enreg lait;   
   raz (lait);
   afficher (lait);
   lait.stock =1; 
   afficher (lait);
   raz (lait);
   afficher (lait);
   
   return 0;
}

void raz (enreg &a)
{
   int i(0);
   a.stock = 0;
   a.prix = 0;
   for (i = 0; i < MOIS ; i++) a.ventes[i]=0;
   return;
}
void afficher (enreg const &a)
{
   int i(0);
   cout << a.stock << " " << a.prix << " " << endl;
   for (i = 0; i < MOIS ; i++) cout << a.ventes[i] << " ";
   cout << endl;
   return;
}
