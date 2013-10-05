#ifndef POINT_H
#define POINT_H

class point
{
   public:
      point(float,float);
      void deplace (float,float);
      void affiche ();

   private:
      float m_x;
      float m_y;
};

#endif
