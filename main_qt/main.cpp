#include "main_qt.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    main_qt window;
    window.show();
    return app.exec();
}
