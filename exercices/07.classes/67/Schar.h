#ifndef SCHAR_H
#define SCHAR_H

const int NB_CHAR(30);

class Schar
{
   public:
      Schar(const char*);
      void ajouter(char);
      int getCardinal() const;
      int chercher(char) const;
      void afficher() const;

   private:
      char  m_char[NB_CHAR];
      int   m_cardinal;
};

#endif
