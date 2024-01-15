// InformacjeOkno.h
#ifndef INFORMACJEOKNO_H
#define INFORMACJEOKNO_H

#include <QWidget>
#include "GlowneOkno.h"

class InformacjeOkno : public QWidget
{
    Q_OBJECT

public:
    explicit InformacjeOkno(GlowneOkno* glowneOkno, QWidget *parent = nullptr);
    ~InformacjeOkno();

private:
    GlowneOkno* m_glowneOkno;

private slots:
    void powrot();
};
#endif // INFORMACJEOKNO_H
