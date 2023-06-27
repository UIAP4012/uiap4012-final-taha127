/********************************************************************************
** Form generated from reading UI file 'customer_page.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOMER_PAGE_H
#define UI_CUSTOMER_PAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_customer_page
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QFrame *frame;
    QFormLayout *formLayout;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QSpacerItem *verticalSpacer;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QWidget *page_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *customer_page)
    {
        if (customer_page->objectName().isEmpty())
            customer_page->setObjectName(QString::fromUtf8("customer_page"));
        customer_page->resize(825, 584);
        customer_page->setMinimumSize(QSize(450, 550));
        customer_page->setStyleSheet(QString::fromUtf8("background-color: rgb(89, 139, 120);"));
        centralwidget = new QWidget(customer_page);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        formLayout = new QFormLayout(frame);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        pushButton_3 = new QPushButton(frame);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        formLayout->setWidget(3, QFormLayout::SpanningRole, pushButton_3);

        pushButton_2 = new QPushButton(frame);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        formLayout->setWidget(1, QFormLayout::SpanningRole, pushButton_2);

        pushButton = new QPushButton(frame);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        formLayout->setWidget(0, QFormLayout::SpanningRole, pushButton);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(2, QFormLayout::SpanningRole, verticalSpacer);


        horizontalLayout->addWidget(frame);

        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 255, 255);"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        stackedWidget->addWidget(page_2);

        horizontalLayout->addWidget(stackedWidget);

        horizontalLayout->setStretch(0, 3);
        horizontalLayout->setStretch(1, 11);
        customer_page->setCentralWidget(centralwidget);
        menubar = new QMenuBar(customer_page);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 825, 21));
        customer_page->setMenuBar(menubar);
        statusbar = new QStatusBar(customer_page);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        customer_page->setStatusBar(statusbar);

        retranslateUi(customer_page);

        QMetaObject::connectSlotsByName(customer_page);
    } // setupUi

    void retranslateUi(QMainWindow *customer_page)
    {
        customer_page->setWindowTitle(QCoreApplication::translate("customer_page", "MainWindow", nullptr));
        pushButton_3->setText(QCoreApplication::translate("customer_page", "sign out", nullptr));
        pushButton_2->setText(QCoreApplication::translate("customer_page", "Edit Information", nullptr));
        pushButton->setText(QCoreApplication::translate("customer_page", "Product order", nullptr));
    } // retranslateUi

};

namespace Ui {
    class customer_page: public Ui_customer_page {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMER_PAGE_H
