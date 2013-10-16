#include <iostream>
using namespace std;

#include "vect.h"

int main()
{
   vect a(1,2,3);
   a.affiche();
   cout << a[1] << endl;
   a[1] = 5;
   cout << a[1] << endl;
   a.affiche();
}

