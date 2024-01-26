#ifndef CREATEROOMWIDGET_H
#define CREATEROOMWIDGET_H

#include <QWidget>
#include <QString>
#include <QVector>

#include "rejimeselector.h"
#include "difficultyselector.h"
#include "slotsselector.h"
#include "generatedcodeselector.h"

namespace Ui {
class CreateRoomWidget;
}

class CreateRoomWidget : public QWidget
{
    Q_OBJECT

public:
    explicit CreateRoomWidget(QWidget *parent = nullptr);
    ~CreateRoomWidget();

signals:
    void RegistrationCompleted(QVector<int> total);

public slots:
    void moveToDifficultySelector(int);
    void moveToSlotsSelector(int);
    void moveToGeneratedCodeSelector(int);
    void moveToRejimeSelector(); //unused
    void moveToEnd();


private:
    int rejime;
    int difficult;
    int words;
    QString code;
    Ui::CreateRoomWidget *ui;
    RejimeSelector* sel1;
    difficultySelector* sel2;
    SlotsSelector* sel3;
    GeneratedCodeSelector* sel4;
};

#endif // CREATEROOMWIDGET_H
