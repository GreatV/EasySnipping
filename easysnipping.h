#ifndef EASYSNIPPING_H
#define EASYSNIPPING_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class EasySnipping; }
QT_END_NAMESPACE

class EasySnipping : public QMainWindow
{
    Q_OBJECT

public:
    EasySnipping(QWidget *parent = nullptr);
    ~EasySnipping();

private:
    Ui::EasySnipping *ui;
};
#endif // EASYSNIPPING_H
