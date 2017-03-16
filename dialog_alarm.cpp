#include "dialog_alarm.h"
#include "ui_dialog_alarm.h"

Dialog_Alarm::Dialog_Alarm(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_Alarm)
{
    ui->setupUi(this);
}

Dialog_Alarm::~Dialog_Alarm()
{
    delete ui;
}
