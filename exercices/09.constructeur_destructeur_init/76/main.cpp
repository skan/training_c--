#include <iostream>
using namespace std;
#include "Point.h"

int main()
{
   Point *a = new Point();
   Point *b = new Point();
   Point *c = new Point();
   Point *d = new Point();

   delete b;
   delete d;
   delete a;
   delete c;
}
