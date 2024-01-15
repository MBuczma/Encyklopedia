#ifndef INFORMACJEOKNO_H
#define INFORMACJEOKNO_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui {
class InformacjeOkno;
}
QT_END_NAMESPACE

class InformacjeOkno : public QWidget
{
    Q_OBJECT

public:
     InformacjeOkno(QWidget *parent = nullptr);
    ~InformacjeOkno();

private slots:
    void powrot();

private:

};

#endif // INFORMACJEOKNO_H
