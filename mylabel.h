#ifndef MYLABEL_H
#define MYLABEL_H

#include <QWidget>
#include <QLabel>

class mylabel : public QLabel
{
    Q_OBJECT
public:
	explicit mylabel(QWidget *parent = nullptr);

    void enterEvent(QEvent *event);

    void leaveEvent(QEvent *);


    void mouseMoveEvent(QMouseEvent *ev);
    void mousePressEvent(QMouseEvent *ev);
    void mouseReleaseEvent(QMouseEvent *ev);


signals:

};

#endif // MYLABEL_H
