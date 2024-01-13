#include "InformacjeOkno.h"
#include "GlowneOkno.h"
#include "ui_InformacjeOkno.h"

InformacjeOkno::InformacjeOkno(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::InformacjeOkno)
{
    ui->setupUi(this);
    connect(ui->pushButtonPowrot, SIGNAL(clicked()), this, SLOT(powrot()));
}

InformacjeOkno::~InformacjeOkno()
{
    delete ui;
}

void InformacjeOkno::powrot()
{
    setWindowTitle("Zmiana");
    this->hide();
    GlowneOkno *window = new GlowneOkno;
    window->show();

}
