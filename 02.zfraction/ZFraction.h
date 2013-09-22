#ifndef ZFRACTION_H
#define ZFRACTION_H

class ZFraction
{
   public:
      ZFraction();
      ZFraction(int nominateur);
      ZFraction(int nominateur, int denominateur);
      void afficher() const;
      void afficher(std::ostream&) const;
      ZFraction& operator+=(const ZFraction &fraction2);
      ZFraction& operator*=(const ZFraction &fraction2);

   private:
      int m_nominateur;
      int m_denominateur;
};

/************************************************************************ 
 * Operators
 * ************************************************************************/ 
std::ostream& operator<<(std::ostream& stream, ZFraction const& fraction);
ZFraction operator+(ZFraction const& fraction1, ZFraction const& fration2);
ZFraction operator*(ZFraction const& fraction1, ZFraction const& fration2);

#endif
