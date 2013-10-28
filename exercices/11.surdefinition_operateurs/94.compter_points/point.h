#ifndef POINT_H
#define POINT_H
#include <stddef.h>


class point
{
   public:
      point(int abs=0, int ord=0);
      ~point();
      static void get_nbPoints();
      void* operator new (size_t);
      void operator delete (void*);
   private:
      static int nb_points;
      static int nb_points_dynamique;
      int x, y;
};

#endif
