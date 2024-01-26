#include <QVector>

#include "createroomwidget.h"
#include "ui_createroomwidget.h"

CreateRoomWidget::CreateRoomWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CreateRoomWidget)
{
    ui->setupUi(this);
    sel1 = new RejimeSelector(ui->installerWidget);
    sel2 = new difficultySelector(ui->installerWidget);
    sel2->hide();
    sel3 = new SlotsSelector(ui->installerWidget);
    sel3->hide();
    sel4 = new GeneratedCodeSelector(ui->installerWidget);
    sel4->hide();

    connect(sel1, &RejimeSelector::moveNext, this, &CreateRoomWidget::moveToDifficultySelector);
    connect(sel2, &difficultySelector::moveNext, this, &CreateRoomWidget::moveToSlotsSelector);
    connect(sel3, &SlotsSelector::moveNext, this, &CreateRoomWidget::moveToGeneratedCodeSelector);
    connect(sel4, &GeneratedCodeSelector::openRoom, this, &CreateRoomWidget::moveToEnd);

}

CreateRoomWidget::~CreateRoomWidget()
{
    delete ui;
    delete sel1;
    delete sel2;
    delete sel3;
    delete sel4;
}

void CreateRoomWidget::moveToDifficultySelector(int p)
{
    rejime = p;
    sel1->hide();
    sel2->show();
}

void CreateRoomWidget::moveToSlotsSelector(int p)
{
    difficult = p;
    sel2->hide();
    sel3->show();
}

void CreateRoomWidget::moveToGeneratedCodeSelector(int p)
{
    words = p;
    sel3->hide();
    sel4->show();
    code = "1234567890";
    sel4->setLabel(code);
}

void CreateRoomWidget::moveToRejimeSelector()
{

}

void CreateRoomWidget::moveToEnd()
{
    qDebug() << "Congrats!";
    QVector<int> p = {rejime, difficult, words};
    emit RegistrationCompleted(p);
}

