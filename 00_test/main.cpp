#include <QApplication>
#include <QPushButton>

int main (int argc, char *argv[])
{
    QApplication    app(argc,argv);

    QWidget         fenetre;
    fenetre.setFixedSize(300,150);

    QPushButton     bouton ("Pimp mon bouton",&fenetre);
    bouton.setToolTip("texte d'aide");
    bouton.setFont(QFont("Comic Sans MS",14));
    bouton.setCursor(Qt::PointingHandCursor);
    bouton.move(60,50);

    QPushButton     autreBouton("autre bouton",&bouton);
    autreBouton.move(30,15);

    fenetre.show();
    return app.exec();
}
