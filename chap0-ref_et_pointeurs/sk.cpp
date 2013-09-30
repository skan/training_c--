#include <iostream>

using namespace std;

void afficher (int& a)
{
   a += 1;
   cout << "fonction a vaut :" << a << endl;
}

int main()
{
   int a(10);
   int *b(0);
   b = new int;
   int monChiffre;
   int &maReference (a);

   *b=a;

   cout << "main: a vaut : " << a << endl;
   afficher(a);
   cout << "main: a vaut : " << a << endl;
   
   cout << "utiliser reference" << endl;

   cout << "main: a vaut : " << maReference << endl;
   afficher(a);
   cout << "main: a vaut : " << maReference << endl;

   cout << "utiliser pointeur" << endl;

   cout << "main: a vaut : " << *b << endl;
   afficher(*b);
   cout << "main: a vaut : " << *b << endl;
   return 0;
}
