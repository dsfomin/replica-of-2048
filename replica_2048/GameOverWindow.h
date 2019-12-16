#ifndef GAMEOVERWINDOW_H
#define GAMEOVERWINDOW_H

#include <QWidget>

class QResetButton;

class qGameOverWindow : public QWidget
{
    Q_OBJECT
public:
    explicit qGameOverWindow(QWidget *parent = 0);

    QResetButton* GetResetButton() const;

signals:

public slots:

private:
    QResetButton* reset;
};


#endif // GAMEOVERWINDOW_H
