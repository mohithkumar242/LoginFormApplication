#include "widget.h"
#include "ui_widget.h"
#include<QColorDialog>
#include<QColor>
#include<QPalette>
#include<QDebug>
#include<QFontDialog>
#include<QFont>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->label->setAutoFillBackground(true);
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_textcolorpushButton_clicked()
{
    QPalette palette = ui->label->palette();
    QColor color = palette.color(QPalette::WindowText);
    QColor chosencolor = QColorDialog::getColor(color,this,"choose text color")          ;
    if(chosencolor.isValid())
    {
        palette.setColor(QPalette::WindowText,chosencolor);
        ui->label->setPalette(palette);
        qDebug()<<"user chosen a valid color";
    }
    else
       {
        qDebug()<<"user chosen a invalid color";
    }
}

void Widget::on_bgcolorpushButton_clicked()
{
    QPalette palette = ui->label->palette();
    QColor color = palette.color(QPalette::Window);
    QColor chosencolor = QColorDialog::getColor(color,this,"choose background color")          ;
    if(chosencolor.isValid())
    {
        palette.setColor(QPalette::Window,chosencolor);
        ui->label->setPalette(palette);
        qDebug()<<"user chosen a valid color";
    }
    else
       {
        qDebug()<<"user chosen a invalid color";
    }
}

void Widget::on_fontpushButton_clicked()
{
    bool ok;
    QFont font = QFontDialog::getFont(&ok,QFont("good brush,10"),this);
    if(ok)
    {
        ui->label->setFont(font);
    }
    else{
         qDebug()<<"user chosen a invalid color";
    }
}
