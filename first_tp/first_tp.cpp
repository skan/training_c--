#include <iostream>

using namespace std;

int main()
{
   cout << "firt c++ exercice, addition a + b " << endl;
   int a(0), b(0),c(0);
   int reste;
   cout << "entrez la valeur de a" << endl;
   cin >> a;
   cout << "entrez la valeur de b" << endl;
   cin >> b;
   c = a + b ;
   cout << a << " + " << b << " = " << c << endl;
   reste = a % b;
   c = a / b;
   cout << a << " / " << b << " = " << c << " et il reste : " << reste << endl;
   return 0;
}
