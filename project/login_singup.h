#ifndef LOGIN_SINGUP_H
#define LOGIN_SINGUP_H

#include <QMainWindow>
#include <QPixmap>
#include <QIcon>
#include <QLineEdit>

namespace Ui {
class login_singup;
}

class login_singup : public QMainWindow
{
    Q_OBJECT

public:
    explicit login_singup(QWidget *parent = nullptr);
    ~login_singup();

private slots:
    void on_exit_triggered();

    void on_pushButton_clicked();

private:
    Ui::login_singup *ui;
};

#endif // LOGIN_SINGUP_H
