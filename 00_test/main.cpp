#include <QApplication>
#include <MaFenetre.h>

int main (int argc, char *argv[])
{
    QApplication    app(argc,argv);

    MaFenetre       fenetre(400,400);
    fenetre.show();
    return app.exec();
}
