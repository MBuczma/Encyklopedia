#ifndef WIDOKPC_H
#define WIDOKPC_H

#include <QWidget>

namespace Ui {
class WidokPC;
}

class WidokPC : public QWidget
{
    Q_OBJECT

public:
    explicit WidokPC(QWidget *parent = nullptr);
    ~WidokPC();

private:
    Ui::WidokPC *ui;

private slots:
    void powrot();

signals:
    void PowrotKlikniety();
};

#endif // WIDOKPC_H
