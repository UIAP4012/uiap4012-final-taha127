#include "signup.h"
#include "ui_signup.h"
#include "login_singup.h"
#include <QDebug>
signup::signup(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::signup)
{
    ui->setupUi(this);
    //ui->statusbar->hide();
    ui->centralwidget->setFixedSize(514, 383);
    ui->statusbar->setSizeGripEnabled(false);
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
bool signup::checkUser(user & person){
    if(person.name.trimmed().isEmpty() || person.family.trimmed().isEmpty() || person.user_name.trimmed().isEmpty() ||
        person.password.trimmed().isEmpty()){
        ui->statusbar->showMessage("Complete all fields", 8000);
        return false;
    }

    if(person.type.trimmed().isEmpty()){
        ui->statusbar->showMessage("Please specify the type of user", 8000);
        return false;
    }
    if(person.checkUserName()){
        ui->statusbar->showMessage("The username entered is already used. Please enter another username", 8000);
        return false;
    }
    return true;
}

void signup::on_pushButton_clicked()
{
    user person;
    person.name = ui->lineEdit->text();
    person.family = ui->lineEdit_2->text();
    person.age = ui->spinBox->value();
    person.user_name = ui->lineEdit_3->text();
    person.password = ui->lineEdit_4->text();
    if(ui->radioButton->isChecked()){
        person.type = "customer";
    }
    else if(ui->radioButton_2->isChecked()){
        person.type = "seller";
    }
    if(checkUser(person))
        person.addToFile();
}
