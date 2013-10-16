#include <iostream>
using namespace std;
#include "vect.h"


int main()
{ 
   vect v(1,2,3);
   cout <<  v[2] << endl;
   if (v[2] == 3) cout << "bingo 3" << endl;
   if (v[2] == 2) cout << "bingo 2" << endl;
   v[2] = 98;
   cout <<  v[2] << endl;
   return 0;
}
