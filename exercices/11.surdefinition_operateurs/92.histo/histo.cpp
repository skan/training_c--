#include "histo.h"

/************************************************************************ 
 * Constructor
 * ************************************************************************/ 

histo::histo (float min, float max, int ninter):m_min(min), m_max(max), m_ninter(ninter)
{
   m_histo = new int [m_max];
   for (int i = 0; i<max;i++) m_histo[i]=min;
}

/************************************************************************ 
 * Destructor
 * ************************************************************************/ 

histo::~histo ()
{
   delete m_histo;
}

/************************************************************************ 
 * Operators
 * ************************************************************************/ 
histo&  histo::operator << (int nb)
{
   if (m_histo[nb] < m_max) m_histo[nb]++;
   return *this;
}

int histo::operator [] (int e) const
{
   if (e < 0 || e > m_max) e = 0;
   return m_histo[e];
}
