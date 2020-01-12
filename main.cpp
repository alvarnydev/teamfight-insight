#include "mainwindow.h"
#include "analyticswindow.h"

#include <QApplication> // Widgets, Event handling, Mouse movement

int main(int argc, char *argv[])
{
    // Object to handle stuff (see above)
    QApplication a(argc, argv);

    // Create and show main window

    MainWindow mainWin;
    mainWin.show();

    /*
    AnalyticsWindow analWin;
    analWin.show();
    */

    // Handler loop
    return a.exec();
}
