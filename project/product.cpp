#include "product.h"

void product::addToFile(){
    file = new QFile("products.csv");
    if(!file->open(QIODevice::ReadWrite | QIODevice::Text)){
        return;
    }

    QTextStream stream(file);
    QString contents = stream.readAll();
    contents += id + "," + user_name_seller + "," + name + "," + QString::number(price) + "," + QString::number(number) + "," + description + "\n";
    file->resize(0);
    stream << contents;
    file->close();
}
