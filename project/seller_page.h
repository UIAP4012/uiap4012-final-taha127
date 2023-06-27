#ifndef SELLER_PAGE_H
#define SELLER_PAGE_H

#include <QMainWindow>
#include "user.h"
#include "login_singup.h"
#include "product.h"
#include <QPair>
#include <QUuid>

namespace Ui {
class seller_page;
}

class seller_page : public QMainWindow
{
    Q_OBJECT

public:
    explicit seller_page(QPair<size_t, user>& person, QWidget *parent = nullptr);
    ~seller_page();

private slots:
    void on_actionexit_triggered();

    bool checkProduct(product &);

    void on_pushButton_clicked();

    void on_pushButton_6_clicked();

private:
    Ui::seller_page *ui;
    QPair<size_t, user> person;
};

#endif // SELLER_PAGE_H
