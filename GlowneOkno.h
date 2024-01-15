// GlowneOkno.h
#ifndef GLOWNEOKNO_H
#define GLOWNEOKNO_H

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
    GlowneOkno(QWidget *parent = nullptr);
    ~GlowneOkno();
    Ui::GlowneOkno *ui;

private:

private slots:
    void quit();
    void informacje();
};
#endif // GLOWNEOKNO_H
