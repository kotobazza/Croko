#include "slotsselector.h"
#include "ui_slotsselector.h"

SlotsSelector::SlotsSelector(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SlotsSelector)
{
    ui->setupUi(this);
}

SlotsSelector::~SlotsSelector()
{
    delete ui;
}

void SlotsSelector::on_pushButton_clicked()
{
    emit moveNext(ui->lineEdit->text().toInt());
}

