#ifndef ZSTRING_H
#define ZSTRING_H

class ZString
{
   public:
      Zstring();
      Zstring(char*);
      Zstring(const ZString &chaine); // constructeur de copie
      ~Zstring();

   private:
      char *m_chaine;
      int m_longueur;

}

#endif
