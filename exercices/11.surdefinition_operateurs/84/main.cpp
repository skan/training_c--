#include <iostream>
using namespace std;

#include "vect.h"

int main()
{
   vect a(1,2,3);
   a.affiche();
   vect b(2,1,0);
   vect c(0,0,0);
   //a = b;
   b.affiche();
   cout << "a == b ? : " << (a==b) << endl;
   cout << "a != b ? : " << (a!=b) << endl;
   c = a + b ;
   c.affiche();
   cout << "a * b ? : " << (a*b) << endl;

}

