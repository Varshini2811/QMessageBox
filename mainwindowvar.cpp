#include "mainwindowvar.h"
#include "ui_mainwindowvar.h"
#include<QMessageBox>
#include<QDebug>
#include<QtCore>
#include<QtGui>

MainWindowvar::MainWindowvar(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindowvar)
{
    ui->setupUi(this);
}

MainWindowvar::~MainWindowvar()
{
    delete ui;
}


void MainWindowvar::on_pushButton_clicked()
{
     QMessageBox :: information(this,"Varshini_212218104175","This is the information box");
}

void MainWindowvar::on_pushButton_2_clicked()
{
    QMessageBox:: StandardButton reply;

        reply=QMessageBox:: question(this,"Varshini_212218104175","Do you like reading books?",
                               QMessageBox::Yes | QMessageBox::No);
        if(reply==QMessageBox::Yes)
           {
            QMessageBox::information(this,"Title Here","You love reading books");
        }
        else
        {
            QMessageBox::information(this,"Title Here","You don't love reading books");
        }
}

void MainWindowvar::on_pushButton_3_clicked()
{
    QMessageBox::warning(this,"Varshini_212218104175","This is a warning message");
}

void MainWindowvar::on_pushButton_4_clicked()
{
    QMessageBox:: StandardButton reply;

        reply=QMessageBox:: question(this,"Varshini_212218104175","Do you like reading books?",
                               QMessageBox::Yes | QMessageBox::No |QMessageBox::YesToAll|QMessageBox::NoToAll);
        if(reply==QMessageBox::Yes)
           {
            QMessageBox::information(this,"Title Here","You love reading books");
        }
        if(reply==QMessageBox::YesToAll)
        {
            QMessageBox::information(this,"Title Here","Yeah i love them to read");
        }
        else
        {
            QMessageBox::information(this,"Title Here","You don't love reading books");
        }
}
