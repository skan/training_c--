#ifndef VECTOR_H
#define VECTOR_H

class Vector
{
   public:
      Vector(int a=0 ,int b=0 ,int c=0 )
      {
         m_x = a;
         m_y = b;
         m_z = c;
      }
      void afficher() const;
   private:
      int m_x;
      int m_y;
      int m_z;
};

#endif
