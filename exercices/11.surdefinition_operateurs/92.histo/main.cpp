#include <iostream>
using namespace std;
#include "histo.h"

int main()
{ 
   histo h(2,10,8);
   h<<3;
   
   for (int i=0;i<8;i++)
   {
      cout << h[i] << " ";
   }
   cout << endl;   
   return 0;
}
