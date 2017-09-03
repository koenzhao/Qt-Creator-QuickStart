/*#include <QApplication>
#include <QDialog>
#include <QLabel>
#include <QTextCodec>
int main(int argc, char* argv[])
{
    QApplication a(argc, argv);
    QTextCodec::setCodecForLocale(QTextCodec::codecForName("UTF_8"));
    QDialog w;
    w.resize(400,300);
    QLabel label(&w);
    label.move(120,120);
    label.setText(QObject::tr("Hello World!"));
    w.show();
    return a.exec();
}*/
#include "ui_hellodialog.h"
int main(int argc, char* argv[])
{
    QApplication a(argc, argv);
    QDialog w;
    Ui::HelloDialog ui;
    ui.setupUi(&w);
    w.show();
    return a.exec();
}
