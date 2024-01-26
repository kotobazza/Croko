#ifndef SLOTSSELECTOR_H
#define SLOTSSELECTOR_H

#include <QWidget>

namespace Ui {
class SlotsSelector;
}

class SlotsSelector : public QWidget
{
    Q_OBJECT

public:
    explicit SlotsSelector(QWidget *parent = nullptr);
    ~SlotsSelector();

signals:
    void moveNext(int);
    void movePrev();

private slots:
    void on_pushButton_clicked();

private:
    Ui::SlotsSelector *ui;
};

#endif // SLOTSSELECTOR_H
