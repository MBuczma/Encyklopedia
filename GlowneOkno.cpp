// GlowneOkno.cpp
#include "GlowneOkno.h"
#include "ui_GlowneOkno.h"
#include <QDebug>

GlowneOkno::GlowneOkno(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::GlowneOkno)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0);
    ui->stackedWidget->insertWidget(1, &widokPC);
    ui->stackedWidget->insertWidget(2, &InfOkno);
    connect(ui->pushButtonStart, SIGNAL(clicked()), this, SLOT(start()));
    connect(ui->pushButtonInformacje, SIGNAL(clicked()), this, SLOT(informacje()));
    connect(ui->pushButtonWyjscie, SIGNAL(clicked()), this, SLOT(quit()));
    connect(&widokPC, SIGNAL(PowrotKlikniety()), this, SLOT(ustawStroneGlowna()));
    connect(&InfOkno, SIGNAL(PowrotKlikniety()), this, SLOT(ustawStroneGlowna()));
}

GlowneOkno::~GlowneOkno()
{
    delete ui;
}

void GlowneOkno::start()
{
    qDebug() << "Przycisk start został naciśnięty.";
    ui->stackedWidget->setCurrentIndex(1);
}

void GlowneOkno::informacje()
{
    qDebug() << "Przycisk informacje został naciśnięty.";
    ui->stackedWidget->setCurrentIndex(2);
}

void GlowneOkno::quit()
{
    qDebug() << "Przycisk wyjscie został naciśnięty.";
    QApplication::quit();
}

void GlowneOkno::ustawStroneGlowna()
{
    qDebug() << "Funkcja GlowneOkno::ustawStroneGlowna() została wywołana.";
    ui->stackedWidget->setCurrentIndex(0);
}
