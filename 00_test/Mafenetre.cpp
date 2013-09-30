#include "MaFenetre.h"

MaFenetre::MaFenetre() : QWidget()
{
    setFixedSize(300,150);

    m_bouton = new QPushButton("Pimp mon bouton !", this);
    m_bouton->setFont(QFont("Comic Sans MS",14));
    m_bouton->setCursor(Qt::PointingHandCursor);
    m_bouton->setIcon(QIcon("smile.png"));
    m_bouton->move(60,50);
}

MaFenetre::MaFenetre(int w, int h) : QWidget()
{
    setFixedSize(w,h);

    m_bouton = new QPushButton("Pimp mon bouton !", this);
    m_bouton->setFont(QFont("Comic Sans MS",14));
    m_bouton->setCursor(Qt::PointingHandCursor);
    m_bouton->setIcon(QIcon("smile.png"));
    m_bouton->move(60,50);
}

