#ifndef STARTINGWIDGET_H
#define STARTINGWIDGET_H

#include <QWidget>

namespace Ui {
class StartingWidget;
}

class StartingWidget : public QWidget
{
    Q_OBJECT

public:
    explicit StartingWidget(QWidget *parent = nullptr);
    ~StartingWidget();

signals:
    void createRoomButtonClicked();
    void joinButtonClicked();

private slots:
    void on_createRoomButton_clicked();

    void on_joinButton_clicked();

private:
    Ui::StartingWidget *ui;
};

#endif // STARTINGWIDGET_H
