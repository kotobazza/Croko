#include "generatedcodeselector.h"
#include "ui_generatedcodeselector.h"
#include <QString>

GeneratedCodeSelector::GeneratedCodeSelector(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::GeneratedCodeSelector)
{
    ui->setupUi(this);
}

GeneratedCodeSelector::~GeneratedCodeSelector()
{
    delete ui;
}

void GeneratedCodeSelector::setLabel(QString code)
{
    QString p = "#" + code;
    ui->label->setText(p);
}

void GeneratedCodeSelector::on_pushButton_clicked()
{
    emit openRoom();
}

