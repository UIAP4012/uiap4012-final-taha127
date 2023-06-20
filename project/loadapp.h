#ifndef LOADAPP_H
#define LOADAPP_H

#include <QDialog>
#include <QMovie>
#include <QtMultimedia/QMediaPlayer>
#include <QtMultimediaWidgets/QVideoWidget>
#include <QApplication>
#include <QtGui/QWindow>
#include <QVideoWidget>
#include <QDesktopWidget>
#include <QScreen>
#include <QTimer>

namespace Ui {
class loadapp;
}

class loadapp : public QDialog
{
    Q_OBJECT

public:
    explicit loadapp(QWidget *parent = nullptr);
    ~loadapp();
public slots:
    void onTimeout();
private:
    Ui::loadapp *ui;
};

#endif // LOADAPP_H
