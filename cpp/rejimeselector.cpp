#include "rejimeselector.h"
#include "ui_rejimeselector.h"

RejimeSelector::RejimeSelector(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::RejimeSelector)
{
    ui->setupUi(this);
}

RejimeSelector::~RejimeSelector()
{
    delete ui;
}

void RejimeSelector::on_pushButton_clicked()
{
    emit moveNext(1);
}


void RejimeSelector::on_pushButton_2_clicked()
{
    emit moveNext(2);
}

