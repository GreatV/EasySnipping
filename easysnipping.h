#ifndef EASYSNIPPING_H
#define EASYSNIPPING_H

#include <QSystemTrayIcon>

#ifndef QT_NO_SYSTEMTRAYICON

#include <QMainWindow>

class EasySnipping : public QMainWindow
{
    Q_OBJECT

public:
    EasySnipping(QWidget *parent = nullptr);
    ~EasySnipping();
};

#endif

#endif // EASYSNIPPING_H
