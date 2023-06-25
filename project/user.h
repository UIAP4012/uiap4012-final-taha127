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
    bool checkUserName();
    QString name;
    QString family;
    QString type;
    size_t age;
    QString password;
    QFile *file;
    QString user_name;
};
/*class users:public QMap<QString, user>{
public:
    //QVector<QString> user_names;
    QFile *file;
    users();
    void addUser(const user & person, const QString & user_name);
    ~users();
};
*/
#endif // USER_H
