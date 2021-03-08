#include "mainwindowvar.h"

#include <QApplication>
#include<QMessageBox>
#include<QDebug>
#include<QtCore>
#include<QtGui>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindowvar w;
    w.show();
    return a.exec();
}
