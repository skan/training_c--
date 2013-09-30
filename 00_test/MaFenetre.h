#ifndef DEF_MAFENETRE
#define DEF_MAFENETRE

#include <QApplication>
#include <QWidget>
#include <QPushButton>
#include <QLCDNumber>
#include <QSlider>

class MaFenetre : public QWidget
{
    public:
    MaFenetre(int w, int h);

    private:
    QLCDNumber *m_lcd;
    QSlider *m_slider;
};

#endif
