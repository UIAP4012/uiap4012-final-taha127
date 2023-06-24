#include "login_singup.h"
#include "ui_login_singup.h"

login_singup::login_singup(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::login_singup)
{
    ui->setupUi(this);
    //ui->centralwidget->setFixedSize(350, 350);
    ui->statusBar->hide();
    ui->menubar->hide();
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
