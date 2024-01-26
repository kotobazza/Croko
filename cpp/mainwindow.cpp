#include "mainwindow.h"
#include "ui_mainwindow.h"



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)

{
    this->setFixedSize(1280, 720);
    ui->setupUi(this);
    win1 = new StartingWidget(this);
    win2 = new CreateRoomWidget(this);
    win3 = new JoinWidget(this);
    win2->hide();
    win3->hide();
    win4 = new MainGame(this);
    win4->hide();

    connect(win1, &StartingWidget::createRoomButtonClicked, this, &MainWindow::startingWidget_createRoomButtonClick);
    connect(win1, &StartingWidget::joinButtonClicked, this, &MainWindow::startingWidget_joinButtonClick);
    connect(win2, &CreateRoomWidget::RegistrationCompleted, this, &MainWindow::createdRoomWindow_creationComplete);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete win1;
    delete win2;
    delete win3;
}

void MainWindow::startingWidget_createRoomButtonClick()
{
    win1->hide();
    win3->hide();
    win2->show();

}

void MainWindow::startingWidget_joinButtonClick()
{
    win3->show();
    win2->hide();
    win1->hide();
}

void MainWindow::createdRoomWindow_creationComplete(QVector<int> p)
{
    qDebug() << p;
    win4->show();
    win3->hide();
    win2->hide();
    win1->hide();
}



