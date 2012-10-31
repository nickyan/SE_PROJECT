#ifndef POINT_H
#define POINT_H

#include <QWidget>

namespace Ui {
class point;
}

class point : public QWidget
{
    Q_OBJECT
    
public:
    explicit point(QWidget *parent = 0);
    ~point();
    
private:
    Ui::point *ui;
};

#endif // POINT_H
