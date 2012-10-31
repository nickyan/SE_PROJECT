#include "mainwidget.h"
#include "ui_mainwidget.h"
#include "courcewidget.h"
#include "schedule.h"
#include "point.h"
MainWidget::MainWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MainWidget)
{
    ui->setupUi(this);

}

MainWidget::~MainWidget()
{
    delete ui;
}

void MainWidget::on_pushButton_clicked()
{
    this->close();
}

void MainWidget::on_pushButton_2_clicked()
{
    courcewidget *cource_widget;
    cource_widget = new courcewidget;
    cource_widget->show();
    this->close();
}

void MainWidget::on_pushButton_3_clicked()
{
    schedule *sch;
    sch = new schedule;
    sch->show();
}

void MainWidget::on_pushButton_4_clicked()
{
    point *poi;
    poi = new point;
    poi->show();
}
