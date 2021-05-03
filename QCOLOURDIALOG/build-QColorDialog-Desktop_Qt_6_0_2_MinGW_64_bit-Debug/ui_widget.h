/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *textcolorpushButton;
    QPushButton *bgcolorpushButton;
    QPushButton *fontpushButton;
    QLabel *label;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(800, 600);
        widget = new QWidget(Widget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(170, 190, 411, 181));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        textcolorpushButton = new QPushButton(widget);
        textcolorpushButton->setObjectName(QString::fromUtf8("textcolorpushButton"));

        horizontalLayout->addWidget(textcolorpushButton);

        bgcolorpushButton = new QPushButton(widget);
        bgcolorpushButton->setObjectName(QString::fromUtf8("bgcolorpushButton"));

        horizontalLayout->addWidget(bgcolorpushButton);

        fontpushButton = new QPushButton(widget);
        fontpushButton->setObjectName(QString::fromUtf8("fontpushButton"));

        horizontalLayout->addWidget(fontpushButton);


        verticalLayout->addLayout(horizontalLayout);

        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        textcolorpushButton->setText(QCoreApplication::translate("Widget", "Text color", nullptr));
        bgcolorpushButton->setText(QCoreApplication::translate("Widget", "bg color", nullptr));
        fontpushButton->setText(QCoreApplication::translate("Widget", "font", nullptr));
        label->setText(QCoreApplication::translate("Widget", "Naku intrest poindi", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
