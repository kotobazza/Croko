#ifndef REJIMESELECTOR_H
#define REJIMESELECTOR_H

#include <QWidget>

namespace Ui {
class RejimeSelector;
}

class RejimeSelector : public QWidget
{
    Q_OBJECT

public:
    explicit RejimeSelector(QWidget *parent = nullptr);
    ~RejimeSelector();

signals:
    void moveNext(int);
    void movePrev();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::RejimeSelector *ui;
};

#endif // REJIMESELECTOR_H
