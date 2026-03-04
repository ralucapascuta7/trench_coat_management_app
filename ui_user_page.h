/********************************************************************************
** Form generated from reading UI file 'user_page.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USER_PAGE_H
#define UI_USER_PAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QLabel *title;
    QLabel *filterBySizeLabel;
    QLineEdit *lineEdit;
    QPushButton *filterButton;
    QPushButton *openPhotoButton;
    QPushButton *addToCartButton;
    QPushButton *nextButton;
    QPushButton *backButton;
    QLabel *cartLabel;
    QLabel *addedItemsLabel;
    QTableWidget *cartTableWidget;
    QPushButton *exportCartButton;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *sizeLabel;
    QLineEdit *sizeLineEdit;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_3;
    QLabel *priceLabel;
    QLineEdit *priceLineEdit;
    QWidget *widget2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *quantityLabel;
    QLineEdit *quantityLineEdit;
    QWidget *widget3;
    QHBoxLayout *horizontalLayout_5;
    QLabel *photoLabel;
    QLineEdit *photoLineEdit;
    QWidget *widget4;
    QHBoxLayout *horizontalLayout_2;
    QLabel *colourLabel;
    QLineEdit *colourLineEdit;
    QWidget *widget5;
    QHBoxLayout *horizontalLayout_6;
    QLabel *totalPriceLabel;
    QLineEdit *totalPriceLineEdit;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName("Form");
        Form->resize(671, 604);
        title = new QLabel(Form);
        title->setObjectName("title");
        title->setGeometry(QRect(220, 20, 241, 31));
        QFont font;
        font.setFamilies({QString::fromUtf8("Impact")});
        font.setPointSize(24);
        font.setBold(true);
        title->setFont(font);
        filterBySizeLabel = new QLabel(Form);
        filterBySizeLabel->setObjectName("filterBySizeLabel");
        filterBySizeLabel->setGeometry(QRect(20, 70, 111, 16));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Times New Roman")});
        font1.setPointSize(18);
        font1.setBold(true);
        filterBySizeLabel->setFont(font1);
        lineEdit = new QLineEdit(Form);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(130, 60, 31, 31));
        filterButton = new QPushButton(Form);
        filterButton->setObjectName("filterButton");
        filterButton->setGeometry(QRect(170, 60, 101, 32));
        openPhotoButton = new QPushButton(Form);
        openPhotoButton->setObjectName("openPhotoButton");
        openPhotoButton->setGeometry(QRect(30, 210, 171, 41));
        addToCartButton = new QPushButton(Form);
        addToCartButton->setObjectName("addToCartButton");
        addToCartButton->setGeometry(QRect(250, 210, 171, 41));
        nextButton = new QPushButton(Form);
        nextButton->setObjectName("nextButton");
        nextButton->setGeometry(QRect(460, 210, 171, 41));
        backButton = new QPushButton(Form);
        backButton->setObjectName("backButton");
        backButton->setGeometry(QRect(30, 540, 101, 32));
        cartLabel = new QLabel(Form);
        cartLabel->setObjectName("cartLabel");
        cartLabel->setGeometry(QRect(330, 270, 58, 16));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Times New Roman")});
        font2.setPointSize(24);
        cartLabel->setFont(font2);
        addedItemsLabel = new QLabel(Form);
        addedItemsLabel->setObjectName("addedItemsLabel");
        addedItemsLabel->setGeometry(QRect(40, 300, 91, 16));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Times New Roman")});
        font3.setPointSize(14);
        addedItemsLabel->setFont(font3);
        cartTableWidget = new QTableWidget(Form);
        if (cartTableWidget->columnCount() < 5)
            cartTableWidget->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        cartTableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        cartTableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        cartTableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        cartTableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        cartTableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        cartTableWidget->setObjectName("cartTableWidget");
        cartTableWidget->setGeometry(QRect(90, 320, 501, 151));
        exportCartButton = new QPushButton(Form);
        exportCartButton->setObjectName("exportCartButton");
        exportCartButton->setGeometry(QRect(30, 510, 101, 32));
        widget = new QWidget(Form);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(20, 100, 165, 23));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        sizeLabel = new QLabel(widget);
        sizeLabel->setObjectName("sizeLabel");
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Times New Roman")});
        font4.setPointSize(15);
        sizeLabel->setFont(font4);

        horizontalLayout->addWidget(sizeLabel);

        sizeLineEdit = new QLineEdit(widget);
        sizeLineEdit->setObjectName("sizeLineEdit");

        horizontalLayout->addWidget(sizeLineEdit);

        widget1 = new QWidget(Form);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(20, 140, 170, 23));
        horizontalLayout_3 = new QHBoxLayout(widget1);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        priceLabel = new QLabel(widget1);
        priceLabel->setObjectName("priceLabel");
        priceLabel->setFont(font4);

        horizontalLayout_3->addWidget(priceLabel);

        priceLineEdit = new QLineEdit(widget1);
        priceLineEdit->setObjectName("priceLineEdit");

        horizontalLayout_3->addWidget(priceLineEdit);

        widget2 = new QWidget(Form);
        widget2->setObjectName("widget2");
        widget2->setGeometry(QRect(20, 160, 192, 23));
        horizontalLayout_4 = new QHBoxLayout(widget2);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        quantityLabel = new QLabel(widget2);
        quantityLabel->setObjectName("quantityLabel");
        quantityLabel->setFont(font4);

        horizontalLayout_4->addWidget(quantityLabel);

        quantityLineEdit = new QLineEdit(widget2);
        quantityLineEdit->setObjectName("quantityLineEdit");

        horizontalLayout_4->addWidget(quantityLineEdit);

        widget3 = new QWidget(Form);
        widget3->setObjectName("widget3");
        widget3->setGeometry(QRect(20, 180, 311, 23));
        horizontalLayout_5 = new QHBoxLayout(widget3);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        photoLabel = new QLabel(widget3);
        photoLabel->setObjectName("photoLabel");
        photoLabel->setFont(font4);

        horizontalLayout_5->addWidget(photoLabel);

        photoLineEdit = new QLineEdit(widget3);
        photoLineEdit->setObjectName("photoLineEdit");

        horizontalLayout_5->addWidget(photoLineEdit);

        widget4 = new QWidget(Form);
        widget4->setObjectName("widget4");
        widget4->setGeometry(QRect(20, 120, 181, 23));
        horizontalLayout_2 = new QHBoxLayout(widget4);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        colourLabel = new QLabel(widget4);
        colourLabel->setObjectName("colourLabel");
        colourLabel->setFont(font4);

        horizontalLayout_2->addWidget(colourLabel);

        colourLineEdit = new QLineEdit(widget4);
        colourLineEdit->setObjectName("colourLineEdit");

        horizontalLayout_2->addWidget(colourLineEdit);

        widget5 = new QWidget(Form);
        widget5->setObjectName("widget5");
        widget5->setGeometry(QRect(90, 480, 121, 23));
        horizontalLayout_6 = new QHBoxLayout(widget5);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        totalPriceLabel = new QLabel(widget5);
        totalPriceLabel->setObjectName("totalPriceLabel");
        QFont font5;
        font5.setFamilies({QString::fromUtf8("Times New Roman")});
        font5.setPointSize(18);
        totalPriceLabel->setFont(font5);

        horizontalLayout_6->addWidget(totalPriceLabel);

        totalPriceLineEdit = new QLineEdit(widget5);
        totalPriceLineEdit->setObjectName("totalPriceLineEdit");

        horizontalLayout_6->addWidget(totalPriceLineEdit);

        QWidget::setTabOrder(addToCartButton, filterButton);
        QWidget::setTabOrder(filterButton, openPhotoButton);
        QWidget::setTabOrder(openPhotoButton, lineEdit);
        QWidget::setTabOrder(lineEdit, nextButton);

        retranslateUi(Form);

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QCoreApplication::translate("Form", "Form", nullptr));
        title->setText(QCoreApplication::translate("Form", "\360\237\247\245 Trench Coat Browser", nullptr));
        filterBySizeLabel->setText(QCoreApplication::translate("Form", "Filter by size:", nullptr));
        filterButton->setText(QCoreApplication::translate("Form", "Filter", nullptr));
        openPhotoButton->setText(QCoreApplication::translate("Form", "Open Photo", nullptr));
        addToCartButton->setText(QCoreApplication::translate("Form", "Add to Cart", nullptr));
        nextButton->setText(QCoreApplication::translate("Form", "Next >>", nullptr));
        backButton->setText(QCoreApplication::translate("Form", "Back", nullptr));
        cartLabel->setText(QCoreApplication::translate("Form", "Cart", nullptr));
        addedItemsLabel->setText(QCoreApplication::translate("Form", "Added Items:", nullptr));
        QTableWidgetItem *___qtablewidgetitem = cartTableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("Form", "Size", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = cartTableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("Form", "Colour", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = cartTableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("Form", "Price", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = cartTableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("Form", "Quantity", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = cartTableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("Form", "Photo URL", nullptr));
        exportCartButton->setText(QCoreApplication::translate("Form", "Export Cart", nullptr));
        sizeLabel->setText(QCoreApplication::translate("Form", "Size:", nullptr));
        priceLabel->setText(QCoreApplication::translate("Form", "Price:", nullptr));
        quantityLabel->setText(QCoreApplication::translate("Form", "Quantity:", nullptr));
        photoLabel->setText(QCoreApplication::translate("Form", "Photo URL:", nullptr));
        colourLabel->setText(QCoreApplication::translate("Form", "Colour:", nullptr));
        totalPriceLabel->setText(QCoreApplication::translate("Form", "Total:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USER_PAGE_H
