#ifndef GENERATEDCODESELECTOR_H
#define GENERATEDCODESELECTOR_H

#include <QWidget>
#include <QString>


namespace Ui {
class GeneratedCodeSelector;
}

class GeneratedCodeSelector : public QWidget
{
    Q_OBJECT

public:
    explicit GeneratedCodeSelector(QWidget *parent = nullptr);
    ~GeneratedCodeSelector();
    void setLabel(QString code);

signals:
    void openRoom();

private slots:
    void on_pushButton_clicked();

private:
    Ui::GeneratedCodeSelector *ui;
};

#endif // GENERATEDCODESELECTOR_H
