#ifndef MAX_H
#define MAX_H

#include <QObject>
#include <QLabel>
#include <QPushButton>

class MyClass:public QObject
{
    Q_OBJECT
private:
    int value;
public:
    MyClass(QObject *parent=0);
    QLabel MyLabel;
    QPushButton clap;
public slots:
    void slotInc();
signals:
    void goodbye();
    void valueChanged(int);
};

#endif // MAX_H
