#include <iostream>
using namespace std;

int main()
{
   char *monMot_p;
   char *temp_p; 

   
   cout << " & 1 = & " << &monMot_p << endl;
   
   monMot_p = "skander";
   temp_p = monMot_p;
   while (*temp_p) cout << *(temp_p ++);
   cout << endl;

   return 0;

}
