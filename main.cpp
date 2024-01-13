#include "GlowneOkno.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    GlowneOkno window;
    window.show();
    return app.exec();
}
