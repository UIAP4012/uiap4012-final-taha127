#include "user.h"

void user::addToFile(){
    file = new QFile("users.csv");
    if(!file->open(QIODevice::ReadWrite | QIODevice::Text)){
        return;
    }

    QTextStream stream(file);
    QString contents = stream.readAll();
    contents += user_name + "," + password + "," + name + "," + family + "," + age + "," + type + "\n";
    file->resize(0);
    stream << contents;
    file->close();
}
bool user::searchByUserName(){
    QFile file("users.csv");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
        return false;
    QTextStream in(&file);
    while (!in.atEnd()) {
        QString line = in.readLine();
        QStringList list = line.split(",");
        if(list[0] == user_name){
            return true;
        }
    }
    file.close();
    return false;
}
