#include "startingwidget.h"
#include "ui_startingwidget.h"

StartingWidget::StartingWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::StartingWidget)
{
    ui->setupUi(this);
}

StartingWidget::~StartingWidget()
{
    delete ui;
}

void StartingWidget::on_createRoomButton_clicked()
{
    emit createRoomButtonClicked();
}


void StartingWidget::on_joinButton_clicked()
{
    emit joinButtonClicked();
}

