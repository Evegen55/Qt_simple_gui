#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    a.setApplicationName(a.translate("main", "System info"));
    a.setOrganizationName("Evgen Ltd.");
    a.setOrganizationDomain("evgen.eu");
    a.setQuitOnLastWindowClosed(false);

    MainWindow w;
    w.setWindowTitle(a.organizationName());
    w.show();    

    return a.exec();
}
