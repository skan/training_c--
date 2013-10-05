#include <iostream>

using namespace std;

void echange_passage_reference (int &, int &);
void echange_passage_addresse (int *, int *);

int main()
{
   int a(5), b(3);
   cout << a << "," << b << endl;
   echange_passage_reference(a,b);
   cout << a << "," << b << endl;
   echange_passage_addresse(&a,&b);
   cout << a << "," << b << endl;
   return 0;
}

void echange_passage_reference (int &a, int &b)
{
   int temp;
   temp = a;
   a = b;
   b = temp;
}
void echange_passage_addresse (int *a, int *b)
{
   int temp;
   temp = *a;
   *a = *b;
   *b = temp;
}
