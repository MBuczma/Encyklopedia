// GlowneOkno.cpp
#include "GlowneOkno.h"
#include "ui_GlowneOkno.h"
#include "InformacjeOkno.h"

#include <QDebug>

GlowneOkno::GlowneOkno(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::GlowneOkno)
{
    ui->setupUi(this);
    connect(ui->pushButtonInformacje, SIGNAL(clicked()), this, SLOT(informacje()));
    connect(ui->pushButtonWyjscie, SIGNAL(clicked()), this, SLOT(quit()));
}

GlowneOkno::~GlowneOkno()
{
    delete ui;
}

void GlowneOkno::informacje()
{
    InformacjeOkno *InformacjeOknoObiekt = new InformacjeOkno(this);
    qDebug() << "Przycisk informacje został naciśnięty.";
    setWindowTitle("Zmiana1");
    ui->stackedWidget->setCurrentIndex(1);
}

void GlowneOkno::quit()
{
    QApplication::quit();
}
