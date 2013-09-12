#include <iostream>

using namespace std;

int main()
{
   int monAge (32);
   int monChiffre;
   int &maReference (monAge);
   string const Description ("Programme d'apprentissage du c++");
   double const pi (3.14);
   string monNome("Skander Hamza");
   cout << Description << endl;
   cout << "Hello world !" << endl;
   cout << "mon age est " << monAge << " et je m'appelle " << monNome << endl;
   cout << "reference verification " << maReference << endl;
   cout << "demande un chiffre" << endl;
   cin >> monChiffre;
   cout << "mon chiffre vaut " << monChiffre << endl;

   return 0;
}
