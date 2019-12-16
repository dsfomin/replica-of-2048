#ifndef RESETBUTTON_H
#define RESETBUTTON_H

#include <QLabel>

class QResetButton : public QLabel
{
    Q_OBJECT
public:
    QResetButton(QWidget *parent);

signals:
    void clicked();
public slots:

protected:
    void mousePressEvent(QMouseEvent *event);
};


#endif // RESETBUTTON_H
