#ifndef SIGNUP_H
#define SIGNUP_H

#include <QMainWindow>
#include <QLabel>
namespace Ui {
class signup;
}

class signup : public QMainWindow
{
    Q_OBJECT

public:
    explicit signup(QWidget *parent = nullptr);
    ~signup();

private slots:
    void on_actionexit_triggered();

    void on_actionback_to_log_in_triggered();

private:
    Ui::signup *ui;
};

#endif // SIGNUP_H
