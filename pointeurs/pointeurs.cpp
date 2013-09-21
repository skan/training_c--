#include <iostream>

using namespace std;

int main()
{
   int *pointeur(0);
   pointeur = new int;
   cout << "ptr adress is : " << pointeur << endl;
   *pointeur = 2;
   delete pointeur;
   cout << "ptr adress is : " << pointeur << endl;

   return 0;
}
