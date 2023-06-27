#include "customer_page.h"
#include "ui_customer_page.h"

customer_page::customer_page(QPair<size_t, user> & person,QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::customer_page)
{
    ui->setupUi(this);
    this->person = person;
    ui->menubar->hide();

    ui->pushButton->setStyleSheet(
        "QPushButton:hover { border :1px solid #00BFFF; }"
        "QPushButton {background-color: transparent;}"
        "QPushButton {font: 14pt MS Reference Sans Serif;}"
        "QPushButton {color: rgb(255, 255, 127);}"
        );
    ui->pushButton_2->setStyleSheet(
        "QPushButton:hover { border :1px solid #00BFFF; }"
        "QPushButton {background-color: transparent;}"
        "QPushButton {font: 14pt MS Reference Sans Serif;}"
        "QPushButton {color: rgb(255, 255, 127);}"
        );
    ui->pushButton_3->setStyleSheet(
        "QPushButton:hover { border :1px solid #00BFFF; }"
        "QPushButton {background-color: transparent;}"
        "QPushButton {font: 14pt MS Reference Sans Serif;}"
        "QPushButton {color: rgb(255, 255, 127);}"
        );
}

customer_page::~customer_page()
{
    delete ui;
}
