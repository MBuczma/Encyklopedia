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

private slots:
    void quit();
    void informacje();

private:
    Ui::GlowneOkno *ui;
};
#endif // GLOWNEOKNO_H
