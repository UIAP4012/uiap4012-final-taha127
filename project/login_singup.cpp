#include "login_singup.h"
#include "ui_login_singup.h"


login_singup::login_singup(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::login_singup)
{
    ui->setupUi(this);
    ui->menubar->hide();
    ui->statusBar->setSizeGripEnabled(false);
    setWindowFlags(Qt::FramelessWindowHint);
    ui->menubar->setStyleSheet("border-radius: 10px");
    ui->pushButton_2->setStyleSheet(
        "QPushButton{background-color: qradialgradient(spread:repeat, cx:0.5, cy:0.5, radius:0.077, fx:0.5, fy:0.5, stop:0 rgba(0, 169, 255, 147), stop:0.497326 rgba(0, 0, 0, 147), stop:1 rgba(0, 169, 255, 147));}"
        "QPushButton:hover {background-color: transparent;}"
        "QPushButton {border-radius:8px;}"
        "QPushButton {color: rgb(85, 255, 0);}"
        "QPushButton {font: 75 12pt Segoe Print;}"
        );
    ui->pushButton->setStyleSheet(
        "QPushButton{border-radius:8px;}"
        "QPushButton{font: 75 12pt Segoe Print;}"
        "QPushButton{background-color: transparent;}"
        "QPushButton:hover {text-decoration: underline;}"
        "QPushButton{color: rgb(255, 255, 0);}"
        );

}

login_singup::~login_singup()
{
    delete ui;
}

void login_singup::on_exit_triggered()
{
    close();
}

void login_singup::on_pushButton_clicked()
{
    close();
    signup * next = new signup();
    next->show();
}

bool login_singup::find_user(QString& user_name, QString& password, QString& type, QPair<size_t, user> &person){
    QFile file("users.csv");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
        return false;
    QTextStream in(&file);
    size_t num_line = 0;
    while (!in.atEnd()) {
        num_line++;
        QString line = in.readLine();
        QStringList list = line.split(",");
        if(list[0] == user_name && list[1] == password && list[5] == type){
            person.first = num_line;
            person.second.user_name = user_name;
            person.second.password = password;
            person.second.name = list[2];
            person.second.family = list[3];
            person.second.age = list[4];
            person.second.type = type;
            return true;
        }
    }
    file.close();
    return false;
}

void login_singup::on_pushButton_2_clicked()
{
    QPair<size_t, user> person;
    QString type, user_name = ui->lineEdit->text(), password = ui->lineEdit_2->text();
    if(user_name.trimmed().isEmpty()){
        ui->statusBar->showMessage("Enter the username", 8000);
        return;
    }
    if(password.trimmed().isEmpty()){
        ui->statusBar->showMessage("Enter the password", 8000);
        return;
    }
    if(ui->radioButton->isChecked()){
        type = "customer";
    }
    else if(ui->radioButton_2->isChecked()){
        type = "seller";
    }
    else{
        ui->statusBar->showMessage("Please specify the type of user", 8000);
        return;
    }
    if(!find_user(user_name, password, type, person)){
        ui->statusBar->showMessage("The information entered is incorrect", 8000);
        return;
    }
    close();
    if(person.second.type == "seller"){
        seller_page * next = new seller_page(person);
        next->show();
    }
    else{
        customer_page * next = new customer_page(person);
        next->show();
    }
}
