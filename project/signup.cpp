#include "signup.h"
#include "ui_signup.h"
#include "login_singup.h"

signup::signup(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::signup)
{
    ui->setupUi(this);
    ui->statusbar->hide();
    ui->menubar->hide();
    this->setWindowFlags(Qt::Window | Qt::FramelessWindowHint);
    ui->pushButton->setStyleSheet(
        "QPushButton{border-radius:8px;}"
        "QPushButton{font: 75 12pt Segoe Print;}"
        "QPushButton{background-color: red;}"
        "QPushButton:hover {background-color: rgb(255, 88, 113);}"
        "QPushButton{color: rgb(255, 255, 0);}"
        );
}

signup::~signup()
{
    delete ui;
}

void signup::on_actionexit_triggered()
{
    close();
}

void signup::on_actionback_to_log_in_triggered()
{
    close();
    login_singup *back = new login_singup();
    back->show();
}
