#ifndef PRODUCT_H
#define PRODUCT_H

#include <QWidget>
#include <QString>
#include <QUuid>
#include <QFile>
#include <QTextStream>

class product
{
public:
    QString name;
    QString user_name_seller;
    size_t price;
    size_t number;
    QString id;
    QString description;
    QFile *file;
    void addToFile();
};

#endif // PRODUCT_H
