#include "mainwindow.h"
#include <QApplication>

#include "cursorfactory.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    //app.setOverrideCursor(QCursor(Qt::CrossCursor));

    MainWindow w;
    w.setCursor(*CursorFactory::getArrowCursor());

    w.show();

    return app.exec();
}
