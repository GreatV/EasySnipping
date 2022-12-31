#include "easysnipping.h"
#include "./ui_easysnipping.h"

EasySnipping::EasySnipping(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::EasySnipping)
{
    ui->setupUi(this);
}

EasySnipping::~EasySnipping()
{
    delete ui;
}

