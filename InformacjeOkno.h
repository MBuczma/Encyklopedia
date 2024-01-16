// InformacjeOkno.h
#ifndef INFORMACJEOKNO_H
#define INFORMACJEOKNO_H

#include <QWidget>

namespace Ui {
class InformacjeOkno;
}

class InformacjeOkno : public QWidget
{
    Q_OBJECT

public:
    explicit InformacjeOkno(QWidget *parent = nullptr);
    ~InformacjeOkno();

private:
    Ui::InformacjeOkno *ui;

private slots:
    void powrot();

signals:
    void PowrotKlikniety();
};

#endif // INFORMACJEOKNO_H
