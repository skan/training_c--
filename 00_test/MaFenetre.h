#ifndef MAFENETRE_H
#define MAFENETRE_H

#include <QApplication>
#include <QWidget>
#include <QPushButton>

class MaFenetre : public QWidget // Herite de QWidget
{
    public:
    MaFenetre();
    MaFenetre(int w, int h);

    private:
    QPushButton *m_bouton;
};

#endif // MAFENETRE_H
