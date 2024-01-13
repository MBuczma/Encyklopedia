#include "GlowneOkno.h"
#include "InformacjeOkno.h"
#include "ui_GlowneOkno.h"
#include <QMediaPlayer>
#include <QFileInfo>
#include <QThread>
#include <QAudioOutput>


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
    InformacjeOkno *secondWindow = new InformacjeOkno;
    this->hide();
    secondWindow->show();

}

void GlowneOkno::quit()
{
    QApplication::quit();
}
