#include <QApplication>
#include <QPushButton>

int main (int argc, char *argv[])
{
    QApplication    app(argc,argv);
    QPushButton     bouton ("Salut les Zeros, la forme ?");

    bouton.setText("pimp mon bouton");
    bouton.setToolTip("texte d'aide");
    bouton.setFont(QFont("Courier"));
    bouton.show();
    return app.exec();
}
