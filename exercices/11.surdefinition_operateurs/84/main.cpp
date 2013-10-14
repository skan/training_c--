#include <iostream>
using namespace std;

#include "vect.h"

int main()
{
   vect a(1,2,3);
   a.affiche();
   vect b(2,1,0);
   //a = b;
   a.affiche();
   cout << "a == b ? : " << (a==b) << endl;

}

