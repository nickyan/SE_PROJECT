#include "schedule.h"
#include "ui_schedule.h"

schedule::schedule(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::schedule)
{
    ui->setupUi(this);
}

schedule::~schedule()
{
    delete ui;
}
