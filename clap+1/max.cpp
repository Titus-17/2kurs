#include "max.h"


MyClass::MyClass(QObject *parent) :  QObject(parent), value(0){
    QObject::connect(&clap, SIGNAL(clicked()),this, SLOT(slotInc()));
    QObject::connect(this, SIGNAL(valueChanged(int)), &MyLabel, SLOT(setNum(int)) );
}

void MyClass::slotInc() {
    emit valueChanged(++this->value);
    if (this->value == 10){
        emit goodbye();
    }
}
