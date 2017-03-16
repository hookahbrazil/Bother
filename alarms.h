#ifndef ALARMS_H
#define ALARMS_H

#include <QDialog>

namespace Ui {
class Alarms;
}

class Alarms : public QDialog
{
    Q_OBJECT

public:
    explicit Alarms(QWidget *parent = 0);
    ~Alarms();

private:
    Ui::Alarms *ui;
};

#endif // ALARMS_H
