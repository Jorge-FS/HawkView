#include "mainwindow.h"
#include <QApplication>
#include <QSplashScreen>
#include <QThread>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    QPixmap pixmap("/hawkview.png");
         QSplashScreen splash(pixmap); /*!< brief Esta es la creacion del splash screen proveniente de QT */
         splash.show();
         a.thread()->sleep(2);
         a.processEvents();
         QMainWindow window;
         w.show();
         splash.finish(&window);

    return a.exec();
}
