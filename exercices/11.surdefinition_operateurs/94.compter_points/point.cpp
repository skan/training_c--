#include <iostream>
#include "point.h"
using namespace std;

int point::nb_points(0);
int point::nb_points_dynamique(0);

point::point(int abs, int ord)
{
   x = abs;
   y = ord;
   nb_points++;
}

point::~point()
{
   nb_points--;
}

void point::get_nbPoints()
{
   cout << nb_points << "," << nb_points_dynamique << endl;
}

void point::operator delete (void *pt)
{
   nb_points_dynamique--;
   ::delete (pt);
}
void* point::operator new(size_t pt)
{
   nb_points_dynamique++;
   return ::new char[pt];
}

