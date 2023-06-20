/********************************************************************************
** Form generated from reading UI file 'loadapp.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOADAPP_H
#define UI_LOADAPP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_loadapp
{
public:
    QLabel *label;

    void setupUi(QDialog *loadapp)
    {
        if (loadapp->objectName().isEmpty())
            loadapp->setObjectName(QString::fromUtf8("loadapp"));
        loadapp->resize(566, 369);
        label = new QLabel(loadapp);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 571, 371));
        label->setCursor(QCursor(Qt::WaitCursor));
        label->setAutoFillBackground(false);
        label->setStyleSheet(QString::fromUtf8("background-image: url(:/resources/movie/first.gif);"));

        retranslateUi(loadapp);

        QMetaObject::connectSlotsByName(loadapp);
    } // setupUi

    void retranslateUi(QDialog *loadapp)
    {
        loadapp->setWindowTitle(QCoreApplication::translate("loadapp", "Dialog", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class loadapp: public Ui_loadapp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOADAPP_H
