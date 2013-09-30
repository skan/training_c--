#ifndef ZSTRING_H
#define ZSTRING_H

class ZString
{
   public:
      ZString();
      ZString(const char *chaine);
      ZString(const ZString &chaine); // constructeur de copie
      ~ZString();

   private:
      int longueur (const char *chaine);
      char* copie(const char *chaine);
      char *m_chaine;
      int m_longueur;
};

#endif
