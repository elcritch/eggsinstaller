#include "eggsinstaller.h"
#include "ui_eggsinstaller.h"

EggsInstaller::EggsInstaller(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::EggsInstallerClass)
{
    ui->setupUi(this);
}

EggsInstaller::~EggsInstaller()
{
    delete ui;
}
