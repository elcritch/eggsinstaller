#include <QtGui/QApplication>
#include "eggsinstaller.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    EggsInstaller w;
    w.show();
    return a.exec();
}
