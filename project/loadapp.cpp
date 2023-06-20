#include "loadapp.h"
#include "ui_loadapp.h"

loadapp::loadapp(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::loadapp)
{
    ui->setupUi(this);
    QMediaPlayer *player = new QMediaPlayer(this);
    player->setMedia(QUrl::fromLocalFile("qrc:/resources/movie/loading.mp4"));
    QVideoWidget *videoWidget = new QVideoWidget(this);
    player->setVideoOutput(videoWidget);
    videoWidget->setGeometry(QApplication::desktop()->screenGeometry());
    videoWidget->show();
    player->play();
    videoWidget->setAttribute(Qt::WA_TransparentForMouseEvents);
    videoWidget->setStyleSheet("background-color: transparent");
    videoWidget->setWindowFlags(Qt::WindowStaysOnBottomHint | Qt::FramelessWindowHint | Qt::Tool);
    videoWidget->showFullScreen();
}

loadapp::~loadapp()
{
    delete ui;
}
