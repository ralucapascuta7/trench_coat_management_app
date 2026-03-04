/********************************************************************************
** Form generated from reading UI file 'chart_page.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHART_PAGE_H
#define UI_CHART_PAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_chartPage
{
public:
    QGraphicsView *chartView;
    QPushButton *backButton;

    void setupUi(QWidget *chartPage)
    {
        if (chartPage->objectName().isEmpty())
            chartPage->setObjectName("chartPage");
        chartPage->resize(666, 534);
        chartView = new QGraphicsView(chartPage);
        chartView->setObjectName("chartView");
        chartView->setGeometry(QRect(40, 30, 591, 401));
        backButton = new QPushButton(chartPage);
        backButton->setObjectName("backButton");
        backButton->setGeometry(QRect(30, 460, 101, 32));

        retranslateUi(chartPage);

        QMetaObject::connectSlotsByName(chartPage);
    } // setupUi

    void retranslateUi(QWidget *chartPage)
    {
        chartPage->setWindowTitle(QCoreApplication::translate("chartPage", "Form", nullptr));
        backButton->setText(QCoreApplication::translate("chartPage", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class chartPage: public Ui_chartPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHART_PAGE_H
