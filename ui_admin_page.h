/********************************************************************************
** Form generated from reading UI file 'admin_page.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMIN_PAGE_H
#define UI_ADMIN_PAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_adminPage
{
public:
    QLabel *title;
    QTableWidget *coatTableWidget;
    QPushButton *backButton;
    QLineEdit *sizeLineEdit;
    QLineEdit *colourLineEdit;
    QLineEdit *photoLineEdit;
    QSpinBox *quantitySpinBox;
    QDoubleSpinBox *priceDoubleSpinBox;
    QLabel *sizeLabel;
    QLabel *colourLabel;
    QLabel *priceLabel;
    QLabel *quantityLabel;
    QLabel *photoLabel;
    QLabel *errorLabel;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *addButton;
    QPushButton *removeButton;
    QPushButton *updateButton;
    QPushButton *chartButton;

    void setupUi(QWidget *adminPage)
    {
        if (adminPage->objectName().isEmpty())
            adminPage->setObjectName("adminPage");
        adminPage->resize(673, 599);
        title = new QLabel(adminPage);
        title->setObjectName("title");
        title->setGeometry(QRect(270, 20, 121, 31));
        QFont font;
        font.setFamilies({QString::fromUtf8("Impact")});
        font.setPointSize(24);
        font.setBold(true);
        title->setFont(font);
        coatTableWidget = new QTableWidget(adminPage);
        if (coatTableWidget->columnCount() < 10)
            coatTableWidget->setColumnCount(10);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        coatTableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        coatTableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        coatTableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        coatTableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        coatTableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        coatTableWidget->setObjectName("coatTableWidget");
        coatTableWidget->setGeometry(QRect(80, 120, 501, 192));
        coatTableWidget->setColumnCount(10);
        coatTableWidget->horizontalHeader()->setVisible(true);
        coatTableWidget->horizontalHeader()->setCascadingSectionResizes(false);
        coatTableWidget->horizontalHeader()->setHighlightSections(true);
        coatTableWidget->horizontalHeader()->setStretchLastSection(false);
        backButton = new QPushButton(adminPage);
        backButton->setObjectName("backButton");
        backButton->setGeometry(QRect(20, 490, 101, 32));
        sizeLineEdit = new QLineEdit(adminPage);
        sizeLineEdit->setObjectName("sizeLineEdit");
        sizeLineEdit->setGeometry(QRect(30, 360, 113, 21));
        colourLineEdit = new QLineEdit(adminPage);
        colourLineEdit->setObjectName("colourLineEdit");
        colourLineEdit->setGeometry(QRect(180, 360, 113, 21));
        photoLineEdit = new QLineEdit(adminPage);
        photoLineEdit->setObjectName("photoLineEdit");
        photoLineEdit->setGeometry(QRect(520, 360, 113, 21));
        quantitySpinBox = new QSpinBox(adminPage);
        quantitySpinBox->setObjectName("quantitySpinBox");
        quantitySpinBox->setGeometry(QRect(440, 360, 51, 22));
        priceDoubleSpinBox = new QDoubleSpinBox(adminPage);
        priceDoubleSpinBox->setObjectName("priceDoubleSpinBox");
        priceDoubleSpinBox->setGeometry(QRect(340, 360, 62, 22));
        sizeLabel = new QLabel(adminPage);
        sizeLabel->setObjectName("sizeLabel");
        sizeLabel->setGeometry(QRect(70, 340, 58, 16));
        colourLabel = new QLabel(adminPage);
        colourLabel->setObjectName("colourLabel");
        colourLabel->setGeometry(QRect(220, 340, 51, 16));
        priceLabel = new QLabel(adminPage);
        priceLabel->setObjectName("priceLabel");
        priceLabel->setGeometry(QRect(350, 340, 58, 16));
        quantityLabel = new QLabel(adminPage);
        quantityLabel->setObjectName("quantityLabel");
        quantityLabel->setGeometry(QRect(440, 340, 58, 16));
        photoLabel = new QLabel(adminPage);
        photoLabel->setObjectName("photoLabel");
        photoLabel->setGeometry(QRect(540, 340, 81, 16));
        errorLabel = new QLabel(adminPage);
        errorLabel->setObjectName("errorLabel");
        errorLabel->setGeometry(QRect(290, 390, 58, 16));
        widget = new QWidget(adminPage);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(30, 420, 601, 32));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        addButton = new QPushButton(widget);
        addButton->setObjectName("addButton");

        horizontalLayout->addWidget(addButton);

        removeButton = new QPushButton(widget);
        removeButton->setObjectName("removeButton");

        horizontalLayout->addWidget(removeButton);

        updateButton = new QPushButton(widget);
        updateButton->setObjectName("updateButton");

        horizontalLayout->addWidget(updateButton);

        chartButton = new QPushButton(widget);
        chartButton->setObjectName("chartButton");

        horizontalLayout->addWidget(chartButton);

        QWidget::setTabOrder(coatTableWidget, removeButton);
        QWidget::setTabOrder(removeButton, updateButton);
        QWidget::setTabOrder(updateButton, addButton);
        QWidget::setTabOrder(addButton, sizeLineEdit);
        QWidget::setTabOrder(sizeLineEdit, colourLineEdit);
        QWidget::setTabOrder(colourLineEdit, photoLineEdit);
        QWidget::setTabOrder(photoLineEdit, backButton);
        QWidget::setTabOrder(backButton, quantitySpinBox);
        QWidget::setTabOrder(quantitySpinBox, priceDoubleSpinBox);

        retranslateUi(adminPage);

        QMetaObject::connectSlotsByName(adminPage);
    } // setupUi

    void retranslateUi(QWidget *adminPage)
    {
        adminPage->setWindowTitle(QCoreApplication::translate("adminPage", "Form", nullptr));
        title->setText(QCoreApplication::translate("adminPage", "Admin Mode", nullptr));
        QTableWidgetItem *___qtablewidgetitem = coatTableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("adminPage", "Size", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = coatTableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("adminPage", "Colour", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = coatTableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("adminPage", "Price", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = coatTableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("adminPage", "Quantity", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = coatTableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("adminPage", "Photo", nullptr));
        backButton->setText(QCoreApplication::translate("adminPage", "Back", nullptr));
        sizeLabel->setText(QCoreApplication::translate("adminPage", "Size:", nullptr));
        colourLabel->setText(QCoreApplication::translate("adminPage", "Colour:", nullptr));
        priceLabel->setText(QCoreApplication::translate("adminPage", "Price:", nullptr));
        quantityLabel->setText(QCoreApplication::translate("adminPage", "Quantity:", nullptr));
        photoLabel->setText(QCoreApplication::translate("adminPage", "Photo URL:", nullptr));
        errorLabel->setText(QString());
        addButton->setText(QCoreApplication::translate("adminPage", "Add", nullptr));
        removeButton->setText(QCoreApplication::translate("adminPage", "Remove", nullptr));
        updateButton->setText(QCoreApplication::translate("adminPage", "Update", nullptr));
        chartButton->setText(QCoreApplication::translate("adminPage", "Open Chart", nullptr));
    } // retranslateUi

};

namespace Ui {
    class adminPage: public Ui_adminPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_PAGE_H
