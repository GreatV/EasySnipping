#include <QApplication>
#ifndef QT_NO_SYSTEMTRAYICON
#include <QLocale>
#include <QTranslator>
#include <QMessageBox>
#include "easysnipping.h"

int main(int argc, char *argv[])
{
    Q_INIT_RESOURCE(easysnipping);

    QApplication a(argc, argv);

    if (!QSystemTrayIcon::isSystemTrayAvailable())
    {
        QMessageBox::critical(nullptr, QObject::tr("EasySnipping"),
                              QObject::tr("I couldn't detect any system tray "
                                          "on this system."));
        return 1;
    }

    QApplication::setQuitOnLastWindowClosed(false);

    QTranslator translator;
    const QStringList uiLanguages = QLocale::system().uiLanguages();
    for (const QString &locale : uiLanguages)
    {
        const QString baseName = "EasySnipping_" + QLocale(locale).name();
        if (translator.load(":/i18n/" + baseName))
        {
            a.installTranslator(&translator);
            break;
        }
    }
    EasySnipping w;
    w.show();
    return a.exec();
}
#else
#include <QLabel>
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QString text("QSystemTrayIcon is not supported on this platform");

    QLabel *label = new QLabel(text);
    label->setWordWrap(true);

    label->show();
    qDebug() << text;

    app.exec();
}
#endif
