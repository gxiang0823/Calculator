#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
}
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void on_num_1_clicked();

    void on_num_2_clicked();

    void on_num_3_clicked();

    void on_num_4_clicked();

    void on_num_5_clicked();

    void on_num_6_clicked();

    void on_num_7_clicked();

    void on_num_8_clicked();

    void on_num_9_clicked();

    void on_addButton_clicked();

    void on_minButton_clicked();

    void on_mulButton_clicked();

    void on_divButton_clicked();

    void on_num_0_clicked();

    void on_clearButton_clicked();

    void on_DelButton_clicked();

    void on_EqualButton_clicked();

private:
    Ui::Widget *ui;
    QString expression;
};
#endif // WIDGET_H
