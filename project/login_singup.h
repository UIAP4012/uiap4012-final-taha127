#ifndef LOGIN_SINGUP_H
#define LOGIN_SINGUP_H

#include <QMainWindow>
#include <QPixmap>
#include <QIcon>
#include <QLineEdit>
#include <QPair>
#include "signup.h"
#include "user.h"
#include "seller_page.h"
#include "customer_page.h"

namespace Ui {
class login_singup;
}

class login_singup : public QMainWindow
{
    Q_OBJECT

public:
    explicit login_singup(QWidget *parent = nullptr);
    ~login_singup();

private slots:
    void on_exit_triggered();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    bool find_user(QString& user_name, QString& password, QString& type, QPair<size_t, user> &person);

private:
    Ui::login_singup *ui;

};

#endif // LOGIN_SINGUP_H
