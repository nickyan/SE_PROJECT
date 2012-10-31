#include "courcewidget.h"
#include "ui_courcewidget.h"
#include "mainwidget.h"
courcewidget::courcewidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::courcewidget)
{
    ui->setupUi(this);
}

courcewidget::~courcewidget()
{
    delete ui;
}

void courcewidget::on_pushButton_clicked()
{
    this->close();
}

void courcewidget::on_pushButton_2_clicked()
{
    MainWidget *main_widget;
    main_widget = new MainWidget;
    main_widget->show();
    this->close();
}
