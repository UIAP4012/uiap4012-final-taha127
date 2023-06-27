/********************************************************************************
** Form generated from reading UI file 'seller_page.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELLER_PAGE_H
#define UI_SELLER_PAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_seller_page
{
public:
    QAction *actionexit;
    QAction *actionmaxsize;
    QAction *actionmmsize;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QFrame *frame;
    QFormLayout *formLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_2;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QLabel *label_2;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label;
    QWidget *page_2;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit;
    QSpinBox *spinBox;
    QTextEdit *textEdit;
    QPushButton *pushButton_6;
    QMenuBar *menubar;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *seller_page)
    {
        if (seller_page->objectName().isEmpty())
            seller_page->setObjectName(QString::fromUtf8("seller_page"));
        seller_page->resize(977, 583);
        seller_page->setMinimumSize(QSize(450, 550));
        seller_page->setStyleSheet(QString::fromUtf8("background-color: rgb(89, 139, 120);"));
        actionexit = new QAction(seller_page);
        actionexit->setObjectName(QString::fromUtf8("actionexit"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/resources/image/closewindow_hover.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionexit->setIcon(icon);
        actionmaxsize = new QAction(seller_page);
        actionmaxsize->setObjectName(QString::fromUtf8("actionmaxsize"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/resources/image/sidebar_mm.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionmaxsize->setIcon(icon1);
        actionmmsize = new QAction(seller_page);
        actionmmsize->setObjectName(QString::fromUtf8("actionmmsize"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/resources/image/tool_minimize_hover.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionmmsize->setIcon(icon2);
        centralwidget = new QWidget(seller_page);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(89, 139, 120);"));
        frame->setFrameShape(QFrame::WinPanel);
        frame->setFrameShadow(QFrame::Raised);
        frame->setLineWidth(16);
        frame->setMidLineWidth(12);
        formLayout = new QFormLayout(frame);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setSizeConstraint(QLayout::SetMaximumSize);
        formLayout->setHorizontalSpacing(2);
        formLayout->setVerticalSpacing(16);
        formLayout->setContentsMargins(3, 18, 8, 27);
        pushButton = new QPushButton(frame);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"font: 14pt \"MS Reference Sans Serif\";\n"
"color: rgb(255, 255, 127);\n"
""));

        formLayout->setWidget(0, QFormLayout::FieldRole, pushButton);

        pushButton_3 = new QPushButton(frame);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_3->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"font: 14pt \"MS Reference Sans Serif\";\n"
"color: rgb(255, 255, 127);"));

        formLayout->setWidget(1, QFormLayout::FieldRole, pushButton_3);

        pushButton_2 = new QPushButton(frame);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"font: 14pt \"MS Reference Sans Serif\";\n"
"color: rgb(255, 255, 127);"));

        formLayout->setWidget(2, QFormLayout::FieldRole, pushButton_2);

        pushButton_4 = new QPushButton(frame);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_4->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"font: 14pt \"MS Reference Sans Serif\";\n"
"color: rgb(255, 255, 127);"));

        formLayout->setWidget(3, QFormLayout::FieldRole, pushButton_4);

        pushButton_5 = new QPushButton(frame);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_5->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"font: 14pt \"MS Reference Sans Serif\";\n"
"color: rgb(255, 255, 127);"));

        formLayout->setWidget(6, QFormLayout::FieldRole, pushButton_5);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(5, QFormLayout::FieldRole, verticalSpacer);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(4, QFormLayout::FieldRole, verticalSpacer_2);


        horizontalLayout->addWidget(frame);

        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 255, 255);"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        gridLayout = new QGridLayout(page);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        label_2 = new QLabel(page);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("font: 28pt \"Microsoft Sans Serif\";\n"
"color: rgb(41, 55, 255);"));

        horizontalLayout_2->addWidget(label_2);

        label_3 = new QLabel(page);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setStyleSheet(QString::fromUtf8("font: 28pt \"Microsoft Sans Serif\";\n"
"color: rgb(41, 55, 255);"));

        horizontalLayout_2->addWidget(label_3);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);


        gridLayout->addLayout(horizontalLayout_2, 0, 0, 1, 1);

        label = new QLabel(page);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("image: url(:/resources/image/winner.gif);"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        gridLayout->setRowStretch(0, 1);
        gridLayout->setRowStretch(1, 3);
        gridLayout->setRowMinimumHeight(0, 2);
        gridLayout->setRowMinimumHeight(1, 3);
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        verticalLayout = new QVBoxLayout(page_2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(164, 26, 164, 26);
        groupBox = new QGroupBox(page_2);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"font: 75 11pt \"Microsoft JhengHei\";\n"
"color: rgb(170, 0, 0);\n"
""));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        lineEdit_2 = new QLineEdit(groupBox);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setStyleSheet(QString::fromUtf8("background-color: rgb(78, 88, 147);\n"
"color: rgb(255, 255, 0);\n"
"border-radius: 5px;"));

        verticalLayout_2->addWidget(lineEdit_2);

        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(78, 88, 147);\n"
"color: rgb(255, 255, 0);\n"
"border-radius: 5px;"));

        verticalLayout_2->addWidget(lineEdit);

        spinBox = new QSpinBox(groupBox);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setCursor(QCursor(Qt::PointingHandCursor));
        spinBox->setStyleSheet(QString::fromUtf8("background-color: rgb(78, 88, 147);\n"
"color: rgb(255, 255, 0);\n"
""));
        spinBox->setMinimum(1);

        verticalLayout_2->addWidget(spinBox);

        textEdit = new QTextEdit(groupBox);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->viewport()->setProperty("cursor", QVariant(QCursor(Qt::IBeamCursor)));
        textEdit->setAutoFillBackground(false);
        textEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(78, 88, 147);\n"
"color: rgb(255, 255, 0);\n"
"border-radius: 5px;"));
        textEdit->setFrameShape(QFrame::Box);
        textEdit->setFrameShadow(QFrame::Plain);
        textEdit->setLineWidth(1);

        verticalLayout_2->addWidget(textEdit);

        pushButton_6 = new QPushButton(groupBox);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 0);\n"
"background-color: rgb(0, 180, 87);\n"
"border-radius: 5px;"));

        verticalLayout_2->addWidget(pushButton_6);


        verticalLayout->addWidget(groupBox);

        stackedWidget->addWidget(page_2);

        horizontalLayout->addWidget(stackedWidget);

        horizontalLayout->setStretch(0, 3);
        horizontalLayout->setStretch(1, 11);
        seller_page->setCentralWidget(centralwidget);
        menubar = new QMenuBar(seller_page);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 977, 21));
        seller_page->setMenuBar(menubar);
        statusbar = new QStatusBar(seller_page);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        statusbar->setCursor(QCursor(Qt::ArrowCursor));
        statusbar->setStyleSheet(QString::fromUtf8("background-color: rgb(89, 139, 120);\n"
"color: rgb(255, 0, 0);\n"
"font: 75 11pt \"MS Shell Dlg 2\";"));
        seller_page->setStatusBar(statusbar);
        toolBar = new QToolBar(seller_page);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        toolBar->setLayoutDirection(Qt::RightToLeft);
        toolBar->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 85, 255);"));
        toolBar->setMovable(false);
        toolBar->setFloatable(false);
        seller_page->addToolBar(Qt::TopToolBarArea, toolBar);

        toolBar->addAction(actionexit);
        toolBar->addAction(actionmaxsize);
        toolBar->addAction(actionmmsize);

        retranslateUi(seller_page);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(seller_page);
    } // setupUi

    void retranslateUi(QMainWindow *seller_page)
    {
        seller_page->setWindowTitle(QCoreApplication::translate("seller_page", "MainWindow", nullptr));
        actionexit->setText(QCoreApplication::translate("seller_page", "exit", nullptr));
        actionmaxsize->setText(QCoreApplication::translate("seller_page", "maxsize", nullptr));
        actionmmsize->setText(QCoreApplication::translate("seller_page", "mmsize", nullptr));
        pushButton->setText(QCoreApplication::translate("seller_page", "Add product", nullptr));
        pushButton_3->setText(QCoreApplication::translate("seller_page", "Edit product", nullptr));
        pushButton_2->setText(QCoreApplication::translate("seller_page", "Edit information", nullptr));
        pushButton_4->setText(QCoreApplication::translate("seller_page", "Show my products", nullptr));
        pushButton_5->setText(QCoreApplication::translate("seller_page", "sign out", nullptr));
        label_2->setText(QCoreApplication::translate("seller_page", "hi ! ", nullptr));
        label_3->setText(QCoreApplication::translate("seller_page", "TextLabel", nullptr));
        label->setText(QString());
        groupBox->setTitle(QCoreApplication::translate("seller_page", "Product Information", nullptr));
        lineEdit_2->setPlaceholderText(QCoreApplication::translate("seller_page", "name, model", nullptr));
        lineEdit->setPlaceholderText(QCoreApplication::translate("seller_page", "price", nullptr));
        spinBox->setSuffix(QCoreApplication::translate("seller_page", " numbers", nullptr));
        spinBox->setPrefix(QString());
        textEdit->setPlaceholderText(QCoreApplication::translate("seller_page", "Description :", nullptr));
        pushButton_6->setText(QCoreApplication::translate("seller_page", "Add", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("seller_page", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class seller_page: public Ui_seller_page {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELLER_PAGE_H
