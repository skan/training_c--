#include <iostream>
using namespace std;
#include "Point.h"

int Point::compteur = 1;

Point::Point()
{
   number=compteur;
   cout << "creation du point num: " << number << endl;
   compteur++;
}
Point::~Point()
{
   cout << "destruction du point: " << number << endl;
}

