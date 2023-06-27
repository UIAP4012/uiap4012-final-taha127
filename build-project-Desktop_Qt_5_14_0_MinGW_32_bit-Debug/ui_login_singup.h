/********************************************************************************
** Form generated from reading UI file 'login_singup.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_SINGUP_H
#define UI_LOGIN_SINGUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_login_singup
{
public:
    QAction *exit;
    QWidget *centralwidget;
    QFrame *frame;
    QGroupBox *groupBox;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_3;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QPushButton *pushButton_2;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusBar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *login_singup)
    {
        if (login_singup->objectName().isEmpty())
            login_singup->setObjectName(QString::fromUtf8("login_singup"));
        login_singup->resize(505, 424);
        login_singup->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 40, 42, 240);"));
        exit = new QAction(login_singup);
        exit->setObjectName(QString::fromUtf8("exit"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/resources/image/closewindow_hover.png"), QSize(), QIcon::Normal, QIcon::Off);
        exit->setIcon(icon);
        QFont font;
        font.setBold(true);
        font.setItalic(false);
        font.setWeight(75);
        exit->setFont(font);
        centralwidget = new QWidget(login_singup);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setEnabled(true);
        centralwidget->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(41, 73, 185, 255), stop:0.865169 rgba(255, 39, 39, 255));\n"
""));
        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(55, 10, 391, 321));
        frame->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
""));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        groupBox = new QGroupBox(frame);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(40, 20, 311, 231));
        groupBox->setStyleSheet(QString::fromUtf8("color: rgb(123, 230, 50);\n"
"background-color: rgb(85, 0, 127);\n"
"font: 15pt \"MV Boli\";\n"
"border-radius : 8px;\n"
""));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 30, 291, 171));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("font: 10pt \"Consol\";\n"
"background-color: rgb(85, 0, 127);"));

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setStyleSheet(QString::fromUtf8("font: 11pt \"Microsoft Sans Serif\";\n"
"background-color: rgb(170, 0, 255);\n"
"border-radius: 8px;\n"
""));

        horizontalLayout->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("font: 10pt \"Consol\";\n"
"background-color: rgb(85, 0, 127);"));

        horizontalLayout_2->addWidget(label_2);

        lineEdit_2 = new QLineEdit(layoutWidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setStyleSheet(QString::fromUtf8("font: 11pt \"Microsoft Sans Serif\";\n"
"background-color: rgb(170, 0, 255);\n"
"border-radius: 8px;"));
        lineEdit_2->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(lineEdit_2);


        verticalLayout->addLayout(horizontalLayout_2);

        layoutWidget1 = new QWidget(groupBox);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 200, 132, 22));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        radioButton = new QRadioButton(layoutWidget1);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setCursor(QCursor(Qt::PointingHandCursor));
        radioButton->setStyleSheet(QString::fromUtf8("font: 8pt \"MS Shell Dlg 2\";\n"
"\n"
"\n"
""));

        horizontalLayout_3->addWidget(radioButton);

        radioButton_2 = new QRadioButton(layoutWidget1);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        radioButton_2->setCursor(QCursor(Qt::PointingHandCursor));
        radioButton_2->setStyleSheet(QString::fromUtf8("font: 8pt \"MS Shell Dlg 2\";"));

        horizontalLayout_3->addWidget(radioButton_2);

        pushButton_2 = new QPushButton(frame);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(135, 258, 121, 31));
        pushButton_2->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_2->setAcceptDrops(true);
        pushButton_2->setStyleSheet(QString::fromUtf8("font: 75 12pt \"Segoe Print\";\n"
"color: rgb(85, 255, 0);"));
        layoutWidget2 = new QWidget(frame);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(40, 280, 231, 41));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(9, 9, 19, 4);
        label_3 = new QLabel(layoutWidget2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setStyleSheet(QString::fromUtf8("\n"
"font: 57 10pt \"Mission Gothic Bold Italic\";\n"
"color: rgb(255, 255, 127);"));

        horizontalLayout_4->addWidget(label_3);

        pushButton = new QPushButton(layoutWidget2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setStyleSheet(QString::fromUtf8("border-radius:8px;\n"
"color: rgb(255, 255, 0);\n"
"font: 75 12pt \"Segoe Print\";\n"
"font: 57 11pt \"Mission Gothic Bold Italic\";\n"
"background-color: transparent;\n"
""));

        horizontalLayout_4->addWidget(pushButton);

        login_singup->setCentralWidget(centralwidget);
        menubar = new QMenuBar(login_singup);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 505, 21));
        menubar->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(41, 73, 185, 255), stop:0.865169 rgba(255, 39, 39, 255));"));
        login_singup->setMenuBar(menubar);
        statusBar = new QStatusBar(login_singup);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        statusBar->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0.539, y2:0, stop:0.146067 rgba(177, 52, 94, 255), stop:1 rgba(255, 0, 0, 255));\n"
"font: 12pt \"MS Shell Dlg 2\";\n"
""));
        login_singup->setStatusBar(statusBar);
        toolBar = new QToolBar(login_singup);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        toolBar->setLayoutDirection(Qt::RightToLeft);
        toolBar->setStyleSheet(QString::fromUtf8("background-color: rgb(119, 54, 231);"));
        toolBar->setMovable(false);
        toolBar->setAllowedAreas(Qt::LeftToolBarArea);
        toolBar->setFloatable(true);
        login_singup->addToolBar(Qt::TopToolBarArea, toolBar);

        toolBar->addAction(exit);

        retranslateUi(login_singup);

        QMetaObject::connectSlotsByName(login_singup);
    } // setupUi

    void retranslateUi(QMainWindow *login_singup)
    {
        login_singup->setWindowTitle(QCoreApplication::translate("login_singup", "MainWindow", nullptr));
        exit->setText(QCoreApplication::translate("login_singup", "exit", nullptr));
        groupBox->setTitle(QCoreApplication::translate("login_singup", "sign in", nullptr));
        label->setText(QCoreApplication::translate("login_singup", "username : ", nullptr));
        label_2->setText(QCoreApplication::translate("login_singup", "password : ", nullptr));
        radioButton->setText(QCoreApplication::translate("login_singup", "Customer", nullptr));
        radioButton_2->setText(QCoreApplication::translate("login_singup", "Seller", nullptr));
        pushButton_2->setText(QCoreApplication::translate("login_singup", "log in", nullptr));
        label_3->setText(QCoreApplication::translate("login_singup", "Don't have an account?", nullptr));
        pushButton->setText(QCoreApplication::translate("login_singup", "sign up", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("login_singup", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class login_singup: public Ui_login_singup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_SINGUP_H
