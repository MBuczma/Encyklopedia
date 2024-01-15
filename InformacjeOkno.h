// InformacjeOkno.h
#ifndef INFORMACJEOKNO_H
#define INFORMACJEOKNO_H

#include <QMainWindow>
#include "ui_GlowneOkno.h"

class InformacjeOkno : public QMainWindow, public Ui::GlowneOkno
{
    Q_OBJECT

public:
    InformacjeOkno(QWidget *parent = nullptr);
    ~InformacjeOkno();

private slots:
    void powrot();
};

#endif // INFORMACJEOKNO_H
