#ifndef MAINWINDOWVAR_H
#define MAINWINDOWVAR_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindowvar; }
QT_END_NAMESPACE

class MainWindowvar : public QMainWindow
{
    Q_OBJECT

public:
    MainWindowvar(QWidget *parent = nullptr);
    ~MainWindowvar();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::MainWindowvar *ui;
};
#endif // MAINWINDOWVAR_H
