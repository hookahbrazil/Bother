#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <dialog_alarms.h>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle("Bother");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_Alarm_clicked()//Button to call alarm window
{
    Dialog_Alarms Alarms(this);
    Alarms.setWindowTitle("Alarmes");
    Alarms.exec();
}
