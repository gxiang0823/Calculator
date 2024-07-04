/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLineEdit *lineEdit;
    QWidget *widget;
    QGridLayout *gridLayout;
    QPushButton *clearButton;
    QPushButton *divButton;
    QPushButton *mulButton;
    QPushButton *minButton;
    QPushButton *num_7;
    QPushButton *num_8;
    QPushButton *num_9;
    QPushButton *addButton;
    QPushButton *num_4;
    QPushButton *num_5;
    QPushButton *num_6;
    QPushButton *num_1;
    QPushButton *num_2;
    QPushButton *num_3;
    QPushButton *EqualButton;
    QPushButton *num_0;
    QPushButton *DelButton;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(200, 290);
        lineEdit = new QLineEdit(Widget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(10, 10, 180, 35));
        lineEdit->setMinimumSize(QSize(180, 35));
        lineEdit->setMaximumSize(QSize(180, 35));
        widget = new QWidget(Widget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(10, 50, 180, 226));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        clearButton = new QPushButton(widget);
        clearButton->setObjectName("clearButton");
        clearButton->setMinimumSize(QSize(40, 40));
        clearButton->setMaximumSize(QSize(40, 40));

        gridLayout->addWidget(clearButton, 0, 0, 1, 1);

        divButton = new QPushButton(widget);
        divButton->setObjectName("divButton");
        divButton->setMinimumSize(QSize(40, 40));
        divButton->setMaximumSize(QSize(40, 40));

        gridLayout->addWidget(divButton, 0, 1, 1, 1);

        mulButton = new QPushButton(widget);
        mulButton->setObjectName("mulButton");
        mulButton->setMinimumSize(QSize(40, 40));
        mulButton->setMaximumSize(QSize(40, 40));

        gridLayout->addWidget(mulButton, 0, 2, 1, 1);

        minButton = new QPushButton(widget);
        minButton->setObjectName("minButton");
        minButton->setMinimumSize(QSize(40, 40));
        minButton->setMaximumSize(QSize(40, 40));

        gridLayout->addWidget(minButton, 0, 3, 1, 1);

        num_7 = new QPushButton(widget);
        num_7->setObjectName("num_7");
        num_7->setMinimumSize(QSize(40, 40));
        num_7->setMaximumSize(QSize(40, 40));

        gridLayout->addWidget(num_7, 1, 0, 1, 1);

        num_8 = new QPushButton(widget);
        num_8->setObjectName("num_8");
        num_8->setMinimumSize(QSize(40, 40));
        num_8->setMaximumSize(QSize(40, 40));

        gridLayout->addWidget(num_8, 1, 1, 1, 1);

        num_9 = new QPushButton(widget);
        num_9->setObjectName("num_9");
        num_9->setMinimumSize(QSize(40, 40));
        num_9->setMaximumSize(QSize(40, 40));

        gridLayout->addWidget(num_9, 1, 2, 1, 1);

        addButton = new QPushButton(widget);
        addButton->setObjectName("addButton");
        addButton->setMinimumSize(QSize(40, 86));
        addButton->setMaximumSize(QSize(40, 86));

        gridLayout->addWidget(addButton, 1, 3, 2, 1);

        num_4 = new QPushButton(widget);
        num_4->setObjectName("num_4");
        num_4->setMinimumSize(QSize(40, 40));
        num_4->setMaximumSize(QSize(40, 40));

        gridLayout->addWidget(num_4, 2, 0, 1, 1);

        num_5 = new QPushButton(widget);
        num_5->setObjectName("num_5");
        num_5->setMinimumSize(QSize(40, 40));
        num_5->setMaximumSize(QSize(40, 40));

        gridLayout->addWidget(num_5, 2, 1, 1, 1);

        num_6 = new QPushButton(widget);
        num_6->setObjectName("num_6");
        num_6->setMinimumSize(QSize(40, 40));
        num_6->setMaximumSize(QSize(40, 40));

        gridLayout->addWidget(num_6, 2, 2, 1, 1);

        num_1 = new QPushButton(widget);
        num_1->setObjectName("num_1");
        num_1->setMinimumSize(QSize(40, 40));
        num_1->setMaximumSize(QSize(40, 40));

        gridLayout->addWidget(num_1, 3, 0, 1, 1);

        num_2 = new QPushButton(widget);
        num_2->setObjectName("num_2");
        num_2->setMinimumSize(QSize(40, 40));
        num_2->setMaximumSize(QSize(40, 40));

        gridLayout->addWidget(num_2, 3, 1, 1, 1);

        num_3 = new QPushButton(widget);
        num_3->setObjectName("num_3");
        num_3->setMinimumSize(QSize(40, 40));
        num_3->setMaximumSize(QSize(40, 40));

        gridLayout->addWidget(num_3, 3, 2, 1, 1);

        EqualButton = new QPushButton(widget);
        EqualButton->setObjectName("EqualButton");
        EqualButton->setMinimumSize(QSize(40, 86));
        EqualButton->setMaximumSize(QSize(40, 86));

        gridLayout->addWidget(EqualButton, 3, 3, 2, 1);

        num_0 = new QPushButton(widget);
        num_0->setObjectName("num_0");
        num_0->setMinimumSize(QSize(86, 40));
        num_0->setMaximumSize(QSize(86, 40));

        gridLayout->addWidget(num_0, 4, 0, 1, 2);

        DelButton = new QPushButton(widget);
        DelButton->setObjectName("DelButton");
        DelButton->setMinimumSize(QSize(40, 40));
        DelButton->setMaximumSize(QSize(40, 40));

        gridLayout->addWidget(DelButton, 4, 2, 1, 1);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        clearButton->setText(QCoreApplication::translate("Widget", "A/C", nullptr));
        divButton->setText(QCoreApplication::translate("Widget", "/", nullptr));
        mulButton->setText(QCoreApplication::translate("Widget", "*", nullptr));
        minButton->setText(QCoreApplication::translate("Widget", "-", nullptr));
        num_7->setText(QCoreApplication::translate("Widget", "7", nullptr));
        num_8->setText(QCoreApplication::translate("Widget", "8", nullptr));
        num_9->setText(QCoreApplication::translate("Widget", "9", nullptr));
        addButton->setText(QCoreApplication::translate("Widget", "+", nullptr));
        num_4->setText(QCoreApplication::translate("Widget", "4", nullptr));
        num_5->setText(QCoreApplication::translate("Widget", "5", nullptr));
        num_6->setText(QCoreApplication::translate("Widget", "6", nullptr));
        num_1->setText(QCoreApplication::translate("Widget", "1", nullptr));
        num_2->setText(QCoreApplication::translate("Widget", "2", nullptr));
        num_3->setText(QCoreApplication::translate("Widget", "3", nullptr));
        EqualButton->setText(QCoreApplication::translate("Widget", "=", nullptr));
        num_0->setText(QCoreApplication::translate("Widget", "0", nullptr));
        DelButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
