#ifndef HISTO_H
#define HISTO_H

class histo
{
   public:
      histo (float min, float max, int ninter);
      ~histo();
      histo& operator << (int);
      int operator [] (int) const;
   private:
      int m_min;
      int m_max;
      int m_ninter;
      int *m_histo;
};
#endif
