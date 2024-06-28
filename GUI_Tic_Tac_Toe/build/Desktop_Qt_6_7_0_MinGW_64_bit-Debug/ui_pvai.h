/********************************************************************************
** Form generated from reading UI file 'pvai.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PVAI_H
#define UI_PVAI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_pvai
{
public:
    QLabel *difficulty;
    QPushButton *easy;
    QPushButton *medium;
    QPushButton *hard;
    QPushButton *main_menu;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout;
    QLabel *username;
    QLabel *VS;
    QLabel *diff;
    QFrame *frame1;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QFrame *line_9;
    QPushButton *eight;
    QFrame *line_3;
    QPushButton *six;
    QPushButton *nine;
    QPushButton *three;
    QPushButton *one;
    QFrame *line_5;
    QPushButton *two;
    QFrame *line_4;
    QFrame *line_8;
    QFrame *line_6;
    QPushButton *seven;
    QPushButton *four;
    QPushButton *five;
    QFrame *line_7;
    QFrame *line_10;
    QFrame *line_2;
    QFrame *line_11;
    QFrame *line_12;
    QFrame *line;

    void setupUi(QDialog *pvai)
    {
        if (pvai->objectName().isEmpty())
            pvai->setObjectName("pvai");
        pvai->resize(789, 600);
        pvai->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 47, 65);"));
        difficulty = new QLabel(pvai);
        difficulty->setObjectName("difficulty");
        difficulty->setGeometry(QRect(20, 200, 141, 20));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        difficulty->setFont(font);
        difficulty->setStyleSheet(QString::fromUtf8("color: rgb(91, 189, 206);"));
        difficulty->setAlignment(Qt::AlignCenter);
        easy = new QPushButton(pvai);
        easy->setObjectName("easy");
        easy->setGeometry(QRect(50, 250, 81, 29));
        QFont font1;
        font1.setBold(true);
        easy->setFont(font1);
        easy->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"color: rgb(0, 255, 0);\n"
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
"background-color: rgb(0, 255, 0);\n"
"color:rgb(0, 33, 45);\n"
"border-color: rgb(0, 255, 0);\n"
"}"));
        medium = new QPushButton(pvai);
        medium->setObjectName("medium");
        medium->setGeometry(QRect(50, 310, 81, 29));
        medium->setFont(font1);
        medium->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"color: rgb(255, 170, 0);\n"
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
"background-color: rgb(255, 170, 0);\n"
"color:rgb(0, 33, 45);\n"
"border-color: rgb(255, 170, 0);\n"
"}"));
        hard = new QPushButton(pvai);
        hard->setObjectName("hard");
        hard->setGeometry(QRect(50, 370, 81, 29));
        hard->setFont(font1);
        hard->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"color: rgb(225, 0, 0);\n"
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
"background-color: rgb(225, 0, 0);\n"
"color:rgb(0, 33, 45);\n"
"border-color: rgb(225, 0, 0);\n"
"}"));
        main_menu = new QPushButton(pvai);
        main_menu->setObjectName("main_menu");
        main_menu->setGeometry(QRect(20, 490, 151, 29));
        main_menu->setFont(font1);
        main_menu->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"color: rgb(96, 192, 218);\n"
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
"background-color: rgb(96, 192, 218);\n"
"color:rgb(0, 33, 45);\n"
"border-color: rgb(96, 192, 218);\n"
"}"));
        layoutWidget_2 = new QWidget(pvai);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(30, 70, 131, 94));
        verticalLayout = new QVBoxLayout(layoutWidget_2);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        username = new QLabel(layoutWidget_2);
        username->setObjectName("username");
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setItalic(false);
        username->setFont(font2);
        username->setStyleSheet(QString::fromUtf8("color: rgb(253, 66, 83);"));
        username->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(username);

        VS = new QLabel(layoutWidget_2);
        VS->setObjectName("VS");
        QFont font3;
        font3.setPointSize(11);
        font3.setBold(true);
        VS->setFont(font3);
        VS->setStyleSheet(QString::fromUtf8("color: rgb(253, 66, 83);"));
        VS->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(VS);

        diff = new QLabel(layoutWidget_2);
        diff->setObjectName("diff");
        QFont font4;
        font4.setPointSize(12);
        font4.setBold(true);
        diff->setFont(font4);
        diff->setStyleSheet(QString::fromUtf8("color: rgb(253, 66, 83);"));
        diff->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(diff);

        frame1 = new QFrame(pvai);
        frame1->setObjectName("frame1");
        frame1->setGeometry(QRect(190, 10, 571, 541));
        frame1->setFrameShape(QFrame::StyledPanel);
        frame1->setFrameShadow(QFrame::Raised);
        layoutWidget = new QWidget(frame1);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 10, 551, 521));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        line_9 = new QFrame(layoutWidget);
        line_9->setObjectName("line_9");
        line_9->setFont(font1);
        line_9->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 67, 80);"));
        line_9->setFrameShape(QFrame::Shape::HLine);
        line_9->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout->addWidget(line_9, 1, 2, 1, 1);

        eight = new QPushButton(layoutWidget);
        eight->setObjectName("eight");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(eight->sizePolicy().hasHeightForWidth());
        eight->setSizePolicy(sizePolicy);
        QFont font5;
        font5.setFamilies({QString::fromUtf8("Century Gothic")});
        font5.setPointSize(30);
        font5.setBold(true);
        eight->setFont(font5);
        eight->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(eight, 4, 2, 1, 1);

        line_3 = new QFrame(layoutWidget);
        line_3->setObjectName("line_3");
        line_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 67, 80);"));
        line_3->setFrameShape(QFrame::Shape::VLine);
        line_3->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout->addWidget(line_3, 2, 3, 1, 1);

        six = new QPushButton(layoutWidget);
        six->setObjectName("six");
        sizePolicy.setHeightForWidth(six->sizePolicy().hasHeightForWidth());
        six->setSizePolicy(sizePolicy);
        six->setFont(font5);
        six->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(six, 2, 4, 1, 1);

        nine = new QPushButton(layoutWidget);
        nine->setObjectName("nine");
        sizePolicy.setHeightForWidth(nine->sizePolicy().hasHeightForWidth());
        nine->setSizePolicy(sizePolicy);
        nine->setFont(font5);
        nine->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(nine, 4, 4, 1, 1);

        three = new QPushButton(layoutWidget);
        three->setObjectName("three");
        sizePolicy.setHeightForWidth(three->sizePolicy().hasHeightForWidth());
        three->setSizePolicy(sizePolicy);
        three->setFont(font5);
        three->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(three, 0, 4, 1, 1);

        one = new QPushButton(layoutWidget);
        one->setObjectName("one");
        sizePolicy.setHeightForWidth(one->sizePolicy().hasHeightForWidth());
        one->setSizePolicy(sizePolicy);
        one->setFont(font5);
        one->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 47, 65);"));

        gridLayout->addWidget(one, 0, 0, 1, 1);

        line_5 = new QFrame(layoutWidget);
        line_5->setObjectName("line_5");
        line_5->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 67, 80);"));
        line_5->setFrameShape(QFrame::Shape::VLine);
        line_5->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout->addWidget(line_5, 0, 3, 1, 1);

        two = new QPushButton(layoutWidget);
        two->setObjectName("two");
        sizePolicy.setHeightForWidth(two->sizePolicy().hasHeightForWidth());
        two->setSizePolicy(sizePolicy);
        two->setFont(font5);
        two->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(two, 0, 2, 1, 1);

        line_4 = new QFrame(layoutWidget);
        line_4->setObjectName("line_4");
        line_4->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 67, 80);"));
        line_4->setFrameShape(QFrame::Shape::VLine);
        line_4->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout->addWidget(line_4, 4, 3, 1, 1);

        line_8 = new QFrame(layoutWidget);
        line_8->setObjectName("line_8");
        line_8->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 67, 80);"));
        line_8->setFrameShape(QFrame::Shape::VLine);
        line_8->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout->addWidget(line_8, 0, 1, 1, 1);

        line_6 = new QFrame(layoutWidget);
        line_6->setObjectName("line_6");
        line_6->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 67, 80);"));
        line_6->setFrameShape(QFrame::Shape::VLine);
        line_6->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout->addWidget(line_6, 4, 1, 1, 1);

        seven = new QPushButton(layoutWidget);
        seven->setObjectName("seven");
        sizePolicy.setHeightForWidth(seven->sizePolicy().hasHeightForWidth());
        seven->setSizePolicy(sizePolicy);
        seven->setFont(font5);
        seven->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(seven, 4, 0, 1, 1);

        four = new QPushButton(layoutWidget);
        four->setObjectName("four");
        sizePolicy.setHeightForWidth(four->sizePolicy().hasHeightForWidth());
        four->setSizePolicy(sizePolicy);
        four->setFont(font5);
        four->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(four, 2, 0, 1, 1);

        five = new QPushButton(layoutWidget);
        five->setObjectName("five");
        sizePolicy.setHeightForWidth(five->sizePolicy().hasHeightForWidth());
        five->setSizePolicy(sizePolicy);
        five->setFont(font5);
        five->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(five, 2, 2, 1, 1);

        line_7 = new QFrame(layoutWidget);
        line_7->setObjectName("line_7");
        line_7->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 67, 80);"));
        line_7->setFrameShape(QFrame::Shape::VLine);
        line_7->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout->addWidget(line_7, 2, 1, 1, 1);

        line_10 = new QFrame(layoutWidget);
        line_10->setObjectName("line_10");
        line_10->setFont(font1);
        line_10->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 67, 80);"));
        line_10->setFrameShadow(QFrame::Sunken);
        line_10->setFrameShape(QFrame::Shape::HLine);

        gridLayout->addWidget(line_10, 1, 4, 1, 1);

        line_2 = new QFrame(layoutWidget);
        line_2->setObjectName("line_2");
        line_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 67, 80);"));
        line_2->setFrameShape(QFrame::Shape::HLine);
        line_2->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout->addWidget(line_2, 3, 0, 1, 1);

        line_11 = new QFrame(layoutWidget);
        line_11->setObjectName("line_11");
        line_11->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 67, 80);"));
        line_11->setFrameShape(QFrame::Shape::HLine);
        line_11->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout->addWidget(line_11, 3, 2, 1, 1);

        line_12 = new QFrame(layoutWidget);
        line_12->setObjectName("line_12");
        line_12->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 67, 80);"));
        line_12->setFrameShape(QFrame::Shape::HLine);
        line_12->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout->addWidget(line_12, 3, 4, 1, 1);

        line = new QFrame(layoutWidget);
        line->setObjectName("line");
        line->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 67, 80);"));
        line->setFrameShape(QFrame::Shape::HLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout->addWidget(line, 1, 0, 1, 1);

        QWidget::setTabOrder(easy, medium);
        QWidget::setTabOrder(medium, hard);
        QWidget::setTabOrder(hard, main_menu);
        QWidget::setTabOrder(main_menu, one);
        QWidget::setTabOrder(one, two);
        QWidget::setTabOrder(two, three);
        QWidget::setTabOrder(three, four);
        QWidget::setTabOrder(four, five);
        QWidget::setTabOrder(five, six);
        QWidget::setTabOrder(six, seven);
        QWidget::setTabOrder(seven, eight);
        QWidget::setTabOrder(eight, nine);

        retranslateUi(pvai);

        QMetaObject::connectSlotsByName(pvai);
    } // setupUi

    void retranslateUi(QDialog *pvai)
    {
        pvai->setWindowTitle(QCoreApplication::translate("pvai", "Player VS AI", nullptr));
        difficulty->setText(QCoreApplication::translate("pvai", "Choose Difficulty", nullptr));
        easy->setText(QCoreApplication::translate("pvai", "Easy", nullptr));
        medium->setText(QCoreApplication::translate("pvai", "Medium", nullptr));
        hard->setText(QCoreApplication::translate("pvai", "Hard", nullptr));
        main_menu->setText(QCoreApplication::translate("pvai", "Main Menu", nullptr));
        username->setText(QCoreApplication::translate("pvai", "Username", nullptr));
        VS->setText(QCoreApplication::translate("pvai", "Vs", nullptr));
        diff->setText(QCoreApplication::translate("pvai", "Ai(Diff)", nullptr));
        eight->setText(QString());
        six->setText(QString());
        nine->setText(QString());
        three->setText(QString());
        one->setText(QString());
        two->setText(QString());
        seven->setText(QString());
        four->setText(QString());
        five->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class pvai: public Ui_pvai {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PVAI_H