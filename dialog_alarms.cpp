#include "dialog_alarms.h"
#include "ui_dialog_alarms.h"

Dialog_Alarms::Dialog_Alarms(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_Alarms)
{
    ui->setupUi(this);
}

Dialog_Alarms::~Dialog_Alarms()
{
    delete ui;
}
