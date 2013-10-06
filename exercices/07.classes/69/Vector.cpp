#include <iostream>
using namespace std;
#include "Vector.h"

Vector::Vector(int a, int b, int c) : m_x(a), m_y(b), m_z(c)
{
}

void Vector::afficher() const
{
   cout << "vector : " << m_x ;
   cout << ", " << m_y ;
   cout << ", " << m_z << endl; ;
}

int Vector::coincide(Vector &a)
{
   if (a.m_x == m_x && a.m_y == m_y && a.m_z == m_z)
      return 1;
   else
      return 0;
}
int Vector::coincide(Vector *a)
{
   if (a->m_x == m_x && a->m_y == m_y && a->m_z == m_z)
      return 1;
   else
      return 0;
}

Vector Vector::addition (Vector &adv)
{
   adv.m_x += m_x;
   adv.m_y += m_y;
   adv.m_z += m_z;
   return adv;
}
