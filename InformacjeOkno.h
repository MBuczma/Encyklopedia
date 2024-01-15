// InformacjeOkno.h
#ifndef INFORMACJEOKNO_H
#define INFORMACJEOKNO_H

#include <QMainWindow>
#include "ui_GlowneOkno.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class InformacjeOkno;
}
QT_END_NAMESPACE

class InformacjeOkno : public QMainWindow, private Ui::GlowneOkno
{
    Q_OBJECT

public:
    InformacjeOkno(QWidget *parent = nullptr);
    ~InformacjeOkno();

private slots:
    void powrot();
};

#endif // INFORMACJEOKNO_H
