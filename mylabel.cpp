#include "mylabel.h"
#include <QDebug>
#include <QMouseEvent>

mylabel::mylabel(QLabel *parent) : QLabel(parent)
{

}


void mylabel::enterEvent(QEvent *event){
    qDebug()<<"in";

}

void mylabel::leaveEvent(QEvent *){
    qDebug()<<"out";

}

void mylabel::mouseMoveEvent(QMouseEvent *ev){
    qDebug()<<"move";



}
void mylabel::mousePressEvent(QMouseEvent *ev){
    qDebug()<<"press";
    QString str = QString("在%1，%2").arg(ev->x()).arg(ev->y());
    qDebug()<<str;
}
void mylabel::mouseReleaseEvent(QMouseEvent *ev){
    qDebug()<<"Release";

}
