#ifndef ZSTRING_H
#define ZSTRING_H

class ZString
{
   public:
      ZString();
      ZString(const char *chaine);
      ZString(const ZString &chaine); // constructeur de copie
      ~ZString();
      void afficher();
      ZString operator=(const char *chaine);
      ZString operator=(const ZString &chaine);
   private:
      int longueur (const char *chaine);
      char* copie(const char *chaine);
      char *m_chaine;
      int m_longueur;
};



#endif
