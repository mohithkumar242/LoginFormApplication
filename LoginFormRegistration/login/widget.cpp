#include "widget.h"
#include "ui_widget.h"
#include<QMessageBox>
#include<QStatusBar>


Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_pushButton_clicked()
{
    QString username=ui->lineEdit_username->text();
    QString password=ui->lineEdit_password->text();
    if(username=="Test"&&password=="Test"){
    QMessageBox::information(this,"Login","username and password are correct");
        hide();
        info=new infoDialog(this);
        info->show();

    }
    else{
        QMessageBox::warning(this,"Login","Username and password is incorrect");
    }
}
