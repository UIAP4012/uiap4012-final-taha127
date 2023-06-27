#ifndef USERS_H
#define USERS_H
#include <QString>
#include <iostream>
#include <QFile>
#include <QMap>
#include <QVector>
#include <QApplication>
#include <QMessageBox>
#include <QTextStream>
using namespace std;
class user
{
public:
    void addToFile();
    bool searchByUserName();
    QString name;
    QString family;
    QString type;
    QString age;
    QString password;
    QFile *file;
    QString user_name;
};
#endif // USER_H
