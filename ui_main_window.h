/********************************************************************************
** Form generated from reading UI file 'main_window.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAIN_WINDOW_H
#define UI_MAIN_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *title;
    QLabel *subtitle;
    QPushButton *adminButton;
    QPushButton *userButton;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        QFont font;
        font.setFamilies({QString::fromUtf8("Academy Engraved LET")});
        MainWindow->setFont(font);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        title = new QLabel(centralwidget);
        title->setObjectName("title");
        title->setGeometry(QRect(180, 90, 331, 36));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Impact")});
        font1.setPointSize(30);
        font1.setBold(true);
        font1.setStrikeOut(false);
        font1.setKerning(true);
        title->setFont(font1);
        title->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        subtitle = new QLabel(centralwidget);
        subtitle->setObjectName("subtitle");
        subtitle->setGeometry(QRect(230, 190, 241, 31));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Times New Roman")});
        font2.setPointSize(20);
        font2.setItalic(true);
        subtitle->setFont(font2);
        adminButton = new QPushButton(centralwidget);
        adminButton->setObjectName("adminButton");
        adminButton->setGeometry(QRect(180, 280, 101, 32));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Times New Roman")});
        font3.setItalic(false);
        adminButton->setFont(font3);
        userButton = new QPushButton(centralwidget);
        userButton->setObjectName("userButton");
        userButton->setGeometry(QRect(390, 280, 101, 32));
        userButton->setFont(font3);
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(270, 530, 131, 16));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Times New Roman")});
        font4.setPointSize(11);
        font4.setItalic(false);
        label->setFont(font4);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 24));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        title->setText(QCoreApplication::translate("MainWindow", "Proper Trench Coats Store", nullptr));
        subtitle->setText(QCoreApplication::translate("MainWindow", "What would you like to do?", nullptr));
        adminButton->setText(QCoreApplication::translate("MainWindow", "Admin Mode", nullptr));
        userButton->setText(QCoreApplication::translate("MainWindow", "User Mode", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Developed by Raluca P\304\203\310\231cu\310\233\304\203", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAIN_WINDOW_H
