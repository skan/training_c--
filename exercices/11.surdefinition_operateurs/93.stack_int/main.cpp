#include <iostream>
using namespace std;
#include "stack_int.h"

int main()
{ 
   void fct (stack_int);
   stack_int pile (10);
   stack_int test (10);
   int n;
   int n1(1);
   int n2(2);
   int n3(3);

   pile << n1 << n2 << n3;
   pile << 4;
   pile << 5;

   //test = pile;

   pile >> n;
   cout << n << endl;
   fct (pile); // passage de pile par valeur
   pile >> n;
   cout << n << endl;
   
   return 0;
}

void fct (stack_int p)
{
   cout << " stack_int par valeur dans fct" << endl;
   int temp(0);

   p << 6;
   p << 7;
   p >> temp;
   cout << temp << endl;
}
