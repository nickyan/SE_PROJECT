#ifndef COURCEWIDGET_H
#define COURCEWIDGET_H

#include <QWidget>
#include <QPainter>
#include <QPixmap>
namespace Ui {
    class courcewidget;
}

class courcewidget : public QWidget
{
    Q_OBJECT

public:
    explicit courcewidget(QWidget *parent = 0);
    ~courcewidget();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::courcewidget *ui;
    void paintEvent(QPaintEvent *)
    {
        QPainter p(this);
        p.drawPixmap(0,0,width(),height(),QPixmap(":/background"));
    }
};

#endif // COURCEWIDGET_H
