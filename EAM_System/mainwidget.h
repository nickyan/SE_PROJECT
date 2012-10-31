#ifndef MAINWIDGET_H
#define MAINWIDGET_H

#include <QWidget>
#include <QPainter>
#include <QPixmap>
namespace Ui {
    class MainWidget;
}

class MainWidget : public QWidget
{
    Q_OBJECT

public:
    explicit MainWidget(QWidget *parent = 0);
    ~MainWidget();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::MainWidget *ui;
    void paintEvent(QPaintEvent *)
    {
        QPainter p(this);
        p.drawPixmap(0,0,width(),height(),QPixmap(":/background"));
    }
};

#endif // MAINWIDGET_H
