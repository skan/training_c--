#include <iostream>
using namespace std;
#include "skInt.h"


main()
{ 
   set_int ens(10) ;
   ens < 25 < 2 < 25 < 3 ;
   cout << (ens[25]) << " " << (ens[5]) << "\n" ;
}

