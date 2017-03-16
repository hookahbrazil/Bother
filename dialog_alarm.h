#ifndef DIALOG_ALARM_H
#define DIALOG_ALARM_H

#include <QDialog>

namespace Ui {
class Dialog_Alarm;
}

class Dialog_Alarm : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_Alarm(QWidget *parent = 0);
    ~Dialog_Alarm();

private:
    Ui::Dialog_Alarm *ui;
};

#endif // DIALOG_ALARM_H
