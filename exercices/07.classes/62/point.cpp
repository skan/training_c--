#include <iostream>
using namespace std;
#include "point.h"

point::point(float a, float b): m_x(a), m_y(b)
{
}

void point::deplace (float a, float b)
{
   cout << "deplacement du point avec " << a << " et " << b << endl; 
   m_x += a;
   m_y += b;
}

void point::affiche()
{
   cout << "point de coordonnees : \t" << m_x << "," << m_y << endl;
}
