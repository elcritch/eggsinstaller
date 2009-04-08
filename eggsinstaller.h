#ifndef EGGSINSTALLER_H
#define EGGSINSTALLER_H

#include <QtGui/QMainWindow>

namespace Ui
{
    class EggsInstallerClass;
}

class EggsInstaller : public QMainWindow
{
    Q_OBJECT

public:
    EggsInstaller(QWidget *parent = 0);
    ~EggsInstaller();

private:
    Ui::EggsInstallerClass *ui;
};

#endif // EGGSINSTALLER_H
