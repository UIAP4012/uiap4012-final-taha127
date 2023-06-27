#ifndef CUSTOMER_PAGE_H
#define CUSTOMER_PAGE_H

#include <QMainWindow>
#include <QPair>
#include "user.h"

namespace Ui {
class customer_page;
}

class customer_page : public QMainWindow
{
    Q_OBJECT

public:
    explicit customer_page(QPair<size_t, user> &, QWidget *parent = nullptr);
    ~customer_page();

private:
    Ui::customer_page *ui;
    QPair<size_t, user> person;
};

#endif // CUSTOMER_PAGE_H
