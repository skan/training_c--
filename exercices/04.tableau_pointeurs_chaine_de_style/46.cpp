#include <iostream>
using namespace std;

int main ()
{
   char* tab[7] = {"Lundi", "Mardi", "Mercredi", "Jeudi", "Vendredi", "Samedi", "Dimanche"};
   int num(0);

   do 
   {
      cout << "Numero de jour de semaine : " << endl;
      cin >> num;
   }while (num <= 0 || num > 7);

   cout << "correspon au jour : " << tab[num-1] << endl;
}

