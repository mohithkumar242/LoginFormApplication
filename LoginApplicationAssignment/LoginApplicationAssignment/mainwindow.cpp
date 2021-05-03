#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QMessageBox>
#include<QStatusBar>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_login_clicked()
{
    QString username=ui->lineEdit_username->text();
    QString password=ui->lineEdit_password->text();
    if(username=="Text"&&password=="Text"){
    QMessageBox::information(this,"Login","username and password are correct");
        loop=new Dialog(this);
        loop->show();
        ui->statusbar->showMessage("App will be killed within 5 sec",5000);

    }
    else{
        QMessageBox::warning(this,"Login","Username and password is incorrect");
    }
}

void MainWindow::on_cancel_clicked()
{

}
