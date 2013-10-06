#include <iostream>
using namespace std;
#include "point.h"

int point::compteur = 0;

point::point(float a, float b): m_x(a), m_y(b)
{
   compteur++;
}

point::~point()
{
   compteur--;
}

void point::deplace (float a, float b)
{
   cout << "deplacement du point avec " << a << " et " << b << endl; 
   m_x += a;
   m_y += b;
}

void point::affiche() const
{
   cout << "point de coordonnees : \t" << m_x << "," << m_y << endl;
   cout << "\t nombre total de points : " << compteur << endl;
}

void point::homothetie(float a)
{
   cout << "homothetie du point avec " << a << endl;
   m_x *= a;
   m_y *= a;
}
