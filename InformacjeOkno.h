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

private slots:
    void powrot();

private:
    Ui::InformacjeOkno *ui;
};

#endif // INFORMACJEOKNO_H
