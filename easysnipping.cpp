#include "easysnipping.h"

EasySnipping::EasySnipping(QWidget *parent)
    : QMainWindow(parent)
{
    trayIcon = new QSystemTrayIcon(this);

    QIcon tray_icon(QPixmap(":/images/screenshot.svg"));
    trayIcon->setIcon(tray_icon);
    this->setWindowIcon(tray_icon);
    trayIcon->show();
}

EasySnipping::~EasySnipping()
{
}

