#include <iostream>
using namespace std;

#include "ZFraction.h"
 
int main()
{
    ZFraction c,d;         //Déclare deux fractions valant 0
    ZFraction b(2);        //Déclare une fraction valant 2/1 (ce qui vaut 2)
    ZFraction a(4,5);      //Déclare une fraction valant 4/5
    
    cout << a;
    b.afficher();
    c.afficher();
    d.afficher();
 
    c = a+b;               //Calcule 4/5 + 2/1 = 14/5
 
//    d = a*b;               //Calcule 4/5 * 2/1 = 8/5
 
    cout << a << " + " << b << " = " << c << endl;
#if 0 
    cout << a << " * " << b << " = " << d << endl;
 
    if(a > b)
        cout << "a est plus grand que b." << endl;
    else if(a==b)
        cout << "a est egal a b." << endl;
    else
        cout << "a est plus petit que b." << endl;
#endif
    return 0;
}
