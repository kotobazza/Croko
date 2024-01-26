#ifndef DIFFICULTYSELECTOR_H
#define DIFFICULTYSELECTOR_H

#include <QWidget>

namespace Ui {
class difficultySelector;
}

class difficultySelector : public QWidget
{
    Q_OBJECT

public:
    explicit difficultySelector(QWidget *parent = nullptr);
    ~difficultySelector();

signals:
   void moveNext(int);
   void movePrev();

private slots:
   void on_pushButton_clicked();

   void on_pushButton_2_clicked();

   void on_pushButton_3_clicked();

private:
    Ui::difficultySelector *ui;
};

#endif // DIFFICULTYSELECTOR_H
