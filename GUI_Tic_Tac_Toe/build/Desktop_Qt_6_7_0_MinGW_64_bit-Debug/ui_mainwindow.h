/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *username_2;
    QLabel *password;
    QLineEdit *username;
    QLineEdit *Password;
    QPushButton *SignUp_Button;
    QPushButton *SignIn_Button;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_4;
    QLabel *label_6;
    QLabel *label_5;
    QPushButton *exit;
    QLabel *passimg;
    QLabel *label_2;
    QStatusBar *statusbar;
    QMenuBar *menubar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(789, 586);
        QFont font;
        font.setPointSize(10);
        MainWindow->setFont(font);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 47, 65);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        username_2 = new QLabel(centralwidget);
        username_2->setObjectName("username_2");
        username_2->setGeometry(QRect(200, 221, 131, 21));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Segoe UI")});
        font1.setPointSize(11);
        font1.setBold(true);
        font1.setItalic(false);
        username_2->setFont(font1);
        username_2->setStyleSheet(QString::fromUtf8("color: rgb(97, 184, 211);"));
        username_2->setAlignment(Qt::AlignCenter);
        password = new QLabel(centralwidget);
        password->setObjectName("password");
        password->setGeometry(QRect(210, 264, 111, 20));
        password->setFont(font1);
        password->setStyleSheet(QString::fromUtf8("color: rgb(97, 184, 211);"));
        password->setAlignment(Qt::AlignCenter);
        username = new QLineEdit(centralwidget);
        username->setObjectName("username");
        username->setGeometry(QRect(340, 220, 201, 26));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Calibri")});
        font2.setPointSize(11);
        username->setFont(font2);
        username->setStyleSheet(QString::fromUtf8("color: rgb(97, 184, 211);\n"
"border: 2px solid rgb(225, 225, 225);\n"
"border-radius: 5px;"));
        username->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        Password = new QLineEdit(centralwidget);
        Password->setObjectName("Password");
        Password->setGeometry(QRect(340, 260, 201, 26));
        Password->setFont(font2);
        Password->setStyleSheet(QString::fromUtf8("color: rgb(97, 184, 211);\n"
"border: 2px solid rgb(225, 225, 225);\n"
"border-radius: 5px;"));
        Password->setEchoMode(QLineEdit::Password);
        Password->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        SignUp_Button = new QPushButton(centralwidget);
        SignUp_Button->setObjectName("SignUp_Button");
        SignUp_Button->setGeometry(QRect(410, 320, 111, 41));
        QFont font3;
        font3.setPointSize(11);
        font3.setWeight(QFont::DemiBold);
        font3.setKerning(true);
        SignUp_Button->setFont(font3);
        SignUp_Button->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"color: rgb(93, 184, 211);\n"
"background-color: rgb(0, 33, 45);\n"
"border: 3px solid;\n"
"border-radius: 5px;\n"
"border-color: rgb(0, 33, 45);\n"
"}\n"
"QPushButton:Hover{\n"
"border-color: rgb(0, 35, 48);\n"
"background-color: rgb(0, 35, 48);\n"
"}\n"
"QPushButton:Pressed{\n"
"background-color: rgb(93, 184, 211);\n"
"color:rgb(0, 33, 45);\n"
"border-color: rgb(93, 184, 211);\n"
"}"));
        SignUp_Button->setFlat(false);
        SignIn_Button = new QPushButton(centralwidget);
        SignIn_Button->setObjectName("SignIn_Button");
        SignIn_Button->setGeometry(QRect(240, 320, 111, 41));
        QFont font4;
        font4.setPointSize(11);
        font4.setWeight(QFont::DemiBold);
        SignIn_Button->setFont(font4);
        SignIn_Button->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"color: rgb(93, 184, 211);\n"
"background-color: rgb(0, 33, 45);\n"
"border: 3px solid;\n"
"border-radius: 5px;\n"
"border-color: rgb(0, 33, 45);\n"
"}\n"
"QPushButton:Hover{\n"
"border-color: rgb(0, 35, 48);\n"
"background-color: rgb(0, 35, 48);\n"
"}\n"
"QPushButton:Pressed{\n"
"background-color: rgb(93, 184, 211);\n"
"color:rgb(0, 33, 45);\n"
"border-color: rgb(93, 184, 211);\n"
"}"));
        SignIn_Button->setAutoDefault(false);
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(230, 100, 300, 93));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName("label");
        QFont font5;
        font5.setFamilies({QString::fromUtf8("Segoe UI")});
        font5.setPointSize(26);
        font5.setWeight(QFont::Black);
        label->setFont(font5);
        label->setStyleSheet(QString::fromUtf8("color: rgb(253, 66, 83);"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName("label_4");
        QFont font6;
        font6.setFamilies({QString::fromUtf8("Segoe UI")});
        font6.setPointSize(12);
        font6.setBold(false);
        label_4->setFont(font6);
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(253, 66, 83);"));
        label_4->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_4);

        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(260, 390, 291, 20));
        QFont font7;
        font7.setPointSize(11);
        font7.setBold(true);
        label_6->setFont(font7);
        label_6->setStyleSheet(QString::fromUtf8("color: rgb(97, 184, 211);"));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(270, 440, 221, 20));
        label_5->setFont(font);
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(97, 184, 211);"));
        exit = new QPushButton(centralwidget);
        exit->setObjectName("exit");
        exit->setGeometry(QRect(300, 480, 161, 41));
        QFont font8;
        font8.setPointSize(12);
        font8.setWeight(QFont::DemiBold);
        exit->setFont(font8);
        exit->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"color: rgb(93, 184, 211);\n"
"background-color: rgb(0, 33, 45);\n"
"border: 3px solid;\n"
"border-radius: 5px;\n"
"border-color: rgb(0, 33, 45);\n"
"}\n"
"QPushButton:Hover{\n"
"border-color: rgb(0, 35, 48);\n"
"background-color: rgb(0, 35, 48);\n"
"}\n"
"QPushButton:Pressed{\n"
"background-color: rgb(93, 184, 211);\n"
"color:rgb(0, 33, 45);\n"
"border-color: rgb(93, 184, 211);\n"
"}"));
        passimg = new QLabel(centralwidget);
        passimg->setObjectName("passimg");
        passimg->setGeometry(QRect(515, 262, 21, 20));
        passimg->setStyleSheet(QString::fromUtf8("image: url(:/img/Images/pass.png);\n"
"background: transparent;"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(510, 219, 31, 28));
        label_2->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"image: url(:/img/Images/users.png);"));
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 789, 26));
        MainWindow->setMenuBar(menubar);

        retranslateUi(MainWindow);

        SignUp_Button->setDefault(false);
        SignIn_Button->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Tic Tac Toe", nullptr));
        username_2->setText(QCoreApplication::translate("MainWindow", "Username :", nullptr));
        password->setText(QCoreApplication::translate("MainWindow", "Password :", nullptr));
        username->setPlaceholderText(QCoreApplication::translate("MainWindow", "Username", nullptr));
        Password->setPlaceholderText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        SignUp_Button->setText(QCoreApplication::translate("MainWindow", "Sign Up", nullptr));
        SignIn_Button->setText(QCoreApplication::translate("MainWindow", "Sign In", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Tic Tac Toe", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Please enter your login credentials", nullptr));
        label_6->setText(QString());
        label_5->setText(QString());
        exit->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        passimg->setText(QString());
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H