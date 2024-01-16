#include "WidokPC.h"
#include "ui_WidokPC.h"

WidokPC::WidokPC(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::WidokPC)
{
    ui->setupUi(this);
    connect(ui->pushButtonPowrot, SIGNAL(clicked()), this, SLOT(powrot()));
}

WidokPC::~WidokPC()
{
    delete ui;
}

void WidokPC::powrot()
{
    qDebug() << "Przycisk WidokPC::powrot() został naciśnięty.";
    emit PowrotKlikniety();
}
