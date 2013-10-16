#include <iostream>
using namespace std;
#include "vect.h"

void vect::affiche() const
{
   cout << "<" << v[0] << "," << v[1] << "," << v[2] << ">" << endl;
}

