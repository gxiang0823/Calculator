#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    this->setMaximumSize(200, 290);
    this->setMinimumSize(200, 290);

    this->setWindowTitle("Calculator");

    QFont f("Times New Roman", 15);      //字体对象
    ui->lineEdit->setFont(f);

    // 按钮上放图片
    QIcon con("D:\\Learning\\QtProjects\\calculator\\delete.png");
    ui->DelButton->setIcon(con);

    //改变按钮背景色
    //ui->EqualButton->setStyle();
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_num_1_clicked()
{
    expression += "1";
    ui->lineEdit->setText(expression);
}


void Widget::on_num_2_clicked()
{
    expression += "2";
    ui->lineEdit->setText(expression);
}


void Widget::on_num_3_clicked()
{
    expression += "3";
    ui->lineEdit->setText(expression);
}


void Widget::on_num_4_clicked()
{
    expression += "4";
    ui->lineEdit->setText(expression);
}


void Widget::on_num_5_clicked()
{
    expression += "5";
    ui->lineEdit->setText(expression);
}


void Widget::on_num_6_clicked()
{
    expression += "6";
    ui->lineEdit->setText(expression);
}


void Widget::on_num_7_clicked()
{
    expression += "7";
    ui->lineEdit->setText(expression);
}


void Widget::on_num_8_clicked()
{
    expression += "8";
    ui->lineEdit->setText(expression);
}


void Widget::on_num_9_clicked()
{
    expression += "9";
    ui->lineEdit->setText(expression);
}


void Widget::on_addButton_clicked()
{
    expression += "+";
    ui->lineEdit->setText(expression);
}


void Widget::on_minButton_clicked()
{
    expression += "-";
    ui->lineEdit->setText(expression);
}


void Widget::on_mulButton_clicked()
{
    expression += "*";
    ui->lineEdit->setText(expression);
}


void Widget::on_divButton_clicked()
{
    expression += "/";
    ui->lineEdit->setText(expression);
}


void Widget::on_num_0_clicked()
{
    expression += "0";
    ui->lineEdit->setText(expression);
}


void Widget::on_clearButton_clicked()
{
    expression.clear();
    ui->lineEdit->clear();
}


void Widget::on_DelButton_clicked()
{
    expression.chop(1);
    ui->lineEdit->setText(expression);
}


void Widget::on_EqualButton_clicked()
{
    //出结果

}

