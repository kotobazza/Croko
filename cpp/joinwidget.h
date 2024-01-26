#ifndef JOINWIDGET_H
#define JOINWIDGET_H

#include <QWidget>

namespace Ui {
class JoinWidget;
}

class JoinWidget : public QWidget
{
    Q_OBJECT

public:
    explicit JoinWidget(QWidget *parent = nullptr);
    ~JoinWidget();

private:
    Ui::JoinWidget *ui;
};

#endif // JOINWIDGET_H
