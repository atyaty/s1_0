#include "mainwindow.h"
#include <QApplication>
//jeszcze jedna poprawka
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
