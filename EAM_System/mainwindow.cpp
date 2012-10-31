#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "mainwidget.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_log_pushButton_clicked()
{
    MainWidget* main_widget;

    std::string pin = ui->password_lineEdit->text().toStdString();
    if (pin == "123456"){
        main_widget = new MainWidget();
        main_widget->show();
        this->close();
    }


}
