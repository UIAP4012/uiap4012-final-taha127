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
    //ui->statusbar->close();
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
    ui->label_3->setText(person.second.name);

}
seller_page::~seller_page()
{
    delete ui;
}

void seller_page::on_actionexit_triggered()
{
    close();
}


/*void seller_page::on_pushButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}*/
