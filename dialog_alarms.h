#ifndef DIALOG_ALARMS_H
#define DIALOG_ALARMS_H

#include <QDialog>

namespace Ui {
class Dialog_Alarms;
}

class Dialog_Alarms : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_Alarms(QWidget *parent = 0);
    ~Dialog_Alarms();

private:
    Ui::Dialog_Alarms *ui;
};

#endif // DIALOG_ALARMS_H
