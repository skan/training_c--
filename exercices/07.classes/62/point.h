#ifndef POINT_H
#define POINT_H

class point
{
   public:
      point(float,float);
      ~point();
      void deplace (float,float);
      void affiche () const;
      void homothetie (float);

   private:
      static int compteur;
      float m_x;
      float m_y;
};

#endif
