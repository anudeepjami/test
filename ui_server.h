/********************************************************************************
** Form generated from reading UI file 'server.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERVER_H
#define UI_SERVER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Server
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QTextBrowser *msg_receiver;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit;
    QPushButton *sendbutton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Server)
    {
        if (Server->objectName().isEmpty())
            Server->setObjectName(QStringLiteral("Server"));
        Server->resize(467, 267);
        centralwidget = new QWidget(Server);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        msg_receiver = new QTextBrowser(centralwidget);
        msg_receiver->setObjectName(QStringLiteral("msg_receiver"));

        verticalLayout->addWidget(msg_receiver);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout->addWidget(lineEdit);

        sendbutton = new QPushButton(centralwidget);
        sendbutton->setObjectName(QStringLiteral("sendbutton"));

        horizontalLayout->addWidget(sendbutton);


        verticalLayout->addLayout(horizontalLayout);

        Server->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Server);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 467, 22));
        Server->setMenuBar(menubar);
        statusbar = new QStatusBar(Server);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        Server->setStatusBar(statusbar);

        retranslateUi(Server);

        QMetaObject::connectSlotsByName(Server);
    } // setupUi

    void retranslateUi(QMainWindow *Server)
    {
        Server->setWindowTitle(QApplication::translate("Server", "Server", Q_NULLPTR));
        sendbutton->setText(QApplication::translate("Server", "Send", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Server: public Ui_Server {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERVER_H
