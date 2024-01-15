#include "InformacjeOkno.h"
#include "ui_GlowneOkno.h"

InformacjeOkno::InformacjeOkno(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::GlowneOkno)
    , GlowneOkno
{
    //ui->setupUi(this);
    connect(ui->pushButtonPowrot, SIGNAL(clicked()), this, SLOT(powrot()));
}

InformacjeOkno::~InformacjeOkno()
{
    delete ui;
}

void InformacjeOkno::powrot()
{
    setWindowTitle("Zmiana");
    ui->stackedWidget->setCurrentIndex(0);

}
