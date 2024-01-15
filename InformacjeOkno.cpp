// InformacjeOkno.cpp
#include "InformacjeOkno.h"
#include "ui_GlowneOkno.h"

InformacjeOkno::InformacjeOkno(GlowneOkno* glowneOkno, QWidget *parent)
    : QWidget(parent)
    , m_glowneOkno(glowneOkno)
{
    connect(m_glowneOkno->ui->pushButtonPowrot, SIGNAL(clicked()), this, SLOT(powrot()));
}

InformacjeOkno::~InformacjeOkno()
{
}

void InformacjeOkno::powrot()
{
    qDebug() << "Przycisk powrót został naciśnięty.";
    m_glowneOkno->setWindowTitle("Zmiana2");
    m_glowneOkno->ui->stackedWidget->setCurrentIndex(0);
    InformacjeOkno::~InformacjeOkno();
}
