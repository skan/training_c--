#include <iostream>
using namespace std;
#include "stack_int.h"

int main()
{ 
   stack_int pile (10);
   int n;
   int n1(1);
   int n2(2);
   int n3(3);
   pile << 3;
   pile << 4;
   pile >> n;
   cout << n << endl;
   pile >> n;
   cout << n << endl;

   pile << n1 << n2 << n3;
   pile >> n1 >> n2 << n3;

   cout << n1 << n2 << n3;
   
   return 0;
}
