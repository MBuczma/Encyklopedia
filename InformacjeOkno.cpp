// InformacjeOkno.cpp
#include "InformacjeOkno.h"
#include <QDebug>

InformacjeOkno::InformacjeOkno(QWidget *parent)
    : QMainWindow(parent)
{
    setupUi(this);
    connect(ui->pushButtonPowrot, SIGNAL(clicked()), this, SLOT(powrot()));
}

InformacjeOkno::~InformacjeOkno()
{
}

void InformacjeOkno::powrot()
{
    qDebug() << "Przycisk powrót został naciśnięty.";
    setWindowTitle("Zmiana");
    stackedWidget->setCurrentIndex(0);  // Zmiana z ui-> na bezpośrednie odwołanie do stackedWidget
}
