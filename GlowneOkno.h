// GlowneOkno.h
#ifndef GLOWNEOKNO_H
#define GLOWNEOKNO_H
#include "WidokPC.h"
#include "InformacjeOkno.h"
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class GlowneOkno;
}
QT_END_NAMESPACE

class GlowneOkno : public QMainWindow
{
    Q_OBJECT

public:
    explicit GlowneOkno(QWidget *parent = nullptr);
    ~GlowneOkno();

private:
    Ui::GlowneOkno *ui;
    InformacjeOkno InfOkno;
    WidokPC widokPC;

private slots:
    void start();
    void quit();
    void informacje();
    void ustawStroneGlowna();
};
#endif // GLOWNEOKNO_H
