#include <iostream>
using namespace std;
#include "point.h"

int main()
{ 
   point a,b;
   point::get_nbPoints(); 
   point *c = new point (1,1);
   point::get_nbPoints(); 
}

