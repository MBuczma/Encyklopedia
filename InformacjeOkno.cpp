// InformacjeOkno.cpp
#include "InformacjeOkno.h"

InformacjeOkno::InformacjeOkno(QWidget *parent)
    : QMainWindow(parent)
{
    setupUi(this);
    connect(pushButtonPowrot, SIGNAL(clicked()), this, SLOT(powrot()));
}

InformacjeOkno::~InformacjeOkno()
{
}

void InformacjeOkno::powrot()
{
    qDebug() << "Przycisk powrót został naciśnięty.";
    setWindowTitle("Zmiana");
    stackedWidget->setCurrentIndex(0);
}
