#ifndef VECTOR_H
#define VECTOR_H

class Vector
{
   public:
      Vector(int a=0 ,int b=0 ,int c=0 );
      void afficher() const;
      int coincide(Vector &);
      int coincide(Vector *);
      Vector addition (Vector &);
   private:
      int m_x;
      int m_y;
      int m_z;
};

#endif
