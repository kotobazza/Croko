#include "difficultyselector.h"
#include "ui_difficultyselector.h"

difficultySelector::difficultySelector(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::difficultySelector)
{
    ui->setupUi(this);
}

difficultySelector::~difficultySelector()
{
    delete ui;
}

void difficultySelector::on_pushButton_clicked()
{
    emit moveNext(1);
}

void difficultySelector::on_pushButton_2_clicked()
{
    emit moveNext(2);
}

void difficultySelector::on_pushButton_3_clicked()
{
    emit moveNext(3);
}



