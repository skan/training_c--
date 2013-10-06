#include <iostream>
using namespace std;
#include "Vector.h"

void Vector::afficher() const
{
   cout << "vector : " << m_x ;
   cout << ", " << m_y ;
   cout << ", " << m_z << endl; ;
}
