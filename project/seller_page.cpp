#include "seller_page.h"
#include "ui_seller_page.h"

seller_page::seller_page(QPair<size_t, user>& person, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::seller_page)
{
    ui->setupUi(this);
    this->person = person;
    setWindowFlags(Qt::FramelessWindowHint);
    ui->menubar->hide();
    connect(ui->actionmaxsize, &QAction::triggered, [this]() {
        setWindowState(Qt::WindowMaximized);
    });
    connect(ui->actionmmsize, &QAction::triggered, [this]() {
        showMinimized();
    });
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
    ui->pushButton_4->setStyleSheet(
        "QPushButton:hover { border :1px solid #00BFFF; }"
        "QPushButton {background-color: transparent;}"
        "QPushButton {font: 14pt MS Reference Sans Serif;}"
        "QPushButton {color: rgb(255, 255, 127);}"
        );
    ui->pushButton_5->setStyleSheet(
        "QPushButton:hover { border :1px solid #00BFFF; }"
        "QPushButton {background-color: transparent;}"
        "QPushButton {font: 14pt MS Reference Sans Serif;}"
        "QPushButton {color: rgb(255, 255, 127);}"
        );
    ui->pushButton_6->setStyleSheet(
        "QPushButton:hover {background-color: #61df00}"
        "QPushButton {background-color: rgb(0, 180, 87);}"
        "QPushButton {border-radius: 5px;}"
        "QPushButton {font: 75 11pt Microsoft JhengHei;}"
        "QPushButton {color: rgb(255, 255, 0);}"
        );



    ui->label_3->setText(person.second.name);
    ui->stackedWidget->setCurrentIndex(0);
}
seller_page::~seller_page()
{
    delete ui;
}

void seller_page::on_actionexit_triggered()
{
    close();
}

void seller_page::on_pushButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

bool seller_page::checkProduct(product & pr){
    if(pr.name.trimmed().isEmpty()){
        ui->statusbar->showMessage("The name field cannot be empty.", 8000);
        return false;
    }
    if(pr.price == 0){
        ui->statusbar->showMessage("Enter the price correctly.", 8000);
        return false;
    }
    return true;
}

void seller_page::on_pushButton_6_clicked()
{
    product pr;
    QUuid id = QUuid::createUuid();
    pr.id = id.toString();
    pr.name = ui->lineEdit_2->text();
    pr.price = ui->lineEdit->text().toInt();
    pr.number = ui->spinBox->value();
    pr.description = ui->textEdit->toPlainText();
    pr.user_name_seller = person.second.user_name;
    if(!checkProduct(pr))
        return;
    pr.addToFile();
}
