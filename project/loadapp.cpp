#include "loadapp.h"
#include "ui_loadapp.h"
#include "mainwindow.h"

loadapp::loadapp(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::loadapp)
{
    ui->setupUi(this);
    setWindowFlags(Qt::FramelessWindowHint);
    QMovie * movie = new QMovie(":/resources/movie/first.gif");
    ui->label->setMovie(movie);
    movie->start();
    QTimer::singleShot(5000, this, SLOT(onTimeout()));
}

loadapp::~loadapp()
{
    delete ui;
}
void loadapp::onTimeout(){
    close();
    MainWindow * next = new MainWindow();
    next->show();
}


