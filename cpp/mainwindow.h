#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QVector>

#include "startingwidget.h"
#include "createroomwidget.h"
#include "joinwidget.h"
#include "maingame.h"



QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void startingWidget_createRoomButtonClick();
    void startingWidget_joinButtonClick();
    void createdRoomWindow_creationComplete(QVector<int>);

private:
    Ui::MainWindow *ui;
    StartingWidget* win1;
    CreateRoomWidget* win2;
    JoinWidget* win3;
    MainGame* win4;

};
#endif // MAINWINDOW_H



