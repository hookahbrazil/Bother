#include "alarms.h"
#include "ui_alarms.h"

Alarms::Alarms(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Alarms)
{
    ui->setupUi(this);
}

Alarms::~Alarms()
{
    delete ui;
}
