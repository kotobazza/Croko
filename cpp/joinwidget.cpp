#include "joinwidget.h"
#include "ui_joinwidget.h"

JoinWidget::JoinWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::JoinWidget)
{
    ui->setupUi(this);
}

JoinWidget::~JoinWidget()
{
    delete ui;
}
