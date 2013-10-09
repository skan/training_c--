#ifndef VECTOR_H
#define VECTOR_H

class Vector
{
   public:
      Vector(int a=0 ,int b=0 ,int c=0 );
      ~Vector();
      void afficher() const;
      friend int coincide(const Vector &a, const Vector &b);
      int coincide(Vector *);
      Vector addition (Vector &);
      static int getCompteur();
   private:
      static int compteur;
      int m_x;
      int m_y;
      int m_z;
};

#endif
