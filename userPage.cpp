#include "userPage.h"
#include <QDesktopServices>
#include <QUrl>
#include <QMessageBox>
#include <QTableWidgetItem>
#include <QInputDialog>
#include <QFileInfo>


UserPage::UserPage(TrenchCoatService& service, QWidget *parent)
        : QWidget(parent), service(service) {
    ui.setupUi(this);

    QStringList options = {"csv", "html"};
    exportFormat = QInputDialog::getItem(
            this,
            "Choose Export Format",
            "Do you want to export your cart as CSV or HTML?",
            options,
            0,
            false
    );

    connect(ui.filterButton, &QPushButton::clicked, this, &UserPage::onFilter);
    connect(ui.openPhotoButton, &QPushButton::clicked, this, &UserPage::onOpenPhoto);
    connect(ui.addToCartButton, &QPushButton::clicked, this, &UserPage::onAddToCart);
    connect(ui.nextButton, &QPushButton::clicked, this, &UserPage::onNext);
    connect(ui.exportCartButton, &QPushButton::clicked, this, &UserPage::onExportCart);
    connect(ui.backButton, &QPushButton::clicked, this, &QWidget::close);
}

void UserPage::onFilter() {
    try {
        std::string size = ui.lineEdit->text().toStdString();
        filteredCoats = service.getBySize(size);
        currentIndex = 0;

        if (filteredCoats.empty()) {
            QMessageBox::information(this, "No Results", "No trench coats found.");
            clearDisplayFields();
        } else {
            showCurrentCoat();
        }
    } catch (const std::exception& e) {
        QMessageBox::warning(this, "Error", e.what());
    }
}

void UserPage::showCurrentCoat() {
    if (filteredCoats.empty()) return;
    const TrenchCoat& coat = filteredCoats[currentIndex];

    ui.sizeLineEdit->setText(QString::fromStdString(coat.getSize()));
    ui.colourLineEdit->setText(QString::fromStdString(coat.getColour()));
    ui.priceLineEdit->setText(QString::number(coat.getPrice()));
    ui.quantityLineEdit->setText(QString::number(coat.getQuantity()));
    ui.photoLineEdit->setText(QString::fromStdString(coat.getPhotograph()));
}

void UserPage::clearDisplayFields() {
    ui.sizeLineEdit->clear();
    ui.colourLineEdit->clear();
    ui.priceLineEdit->clear();
    ui.quantityLineEdit->clear();
    ui.photoLineEdit->clear();
}


void UserPage::onNext() {
    if (filteredCoats.empty()) return;
    currentIndex = (currentIndex + 1) % filteredCoats.size();
    showCurrentCoat();
}

void UserPage::onOpenPhoto() {
    if (filteredCoats.empty()) return;
    QDesktopServices::openUrl(QUrl(QString::fromStdString(filteredCoats[currentIndex].getPhotograph())));
}

void UserPage::onAddToCart() {
    if (filteredCoats.empty()) return;
    try {
        service.addToBasket(filteredCoats[currentIndex]);
        refreshCartTable();
        updateTotal();

        std::string size = ui.lineEdit->text().toStdString();
        filteredCoats = service.getBySize(size);

        if (filteredCoats.empty()) {
            QMessageBox::information(this, "Done", "No more coats available.");
            clearDisplayFields();
        } else {
            currentIndex %= filteredCoats.size();
            showCurrentCoat();
        }
    } catch (const std::exception& e) {
        QMessageBox::warning(this, "Error", e.what());
    }
}

void UserPage::onExportCart() {
    try {
        QString filename = (exportFormat == "csv") ? "basket.csv" : "basket.html";
        service.exportBasketToFile(exportFormat.toStdString(), filename.toStdString());

        QString fullPath = QFileInfo(filename).absoluteFilePath();
        qDebug() << "Exported to:" << fullPath;

        if (!QDesktopServices::openUrl(QUrl::fromLocalFile(fullPath))) {
            QMessageBox::warning(this, "Open Error", "File was saved but couldn't be opened.");
        }
    } catch (const std::exception& e) {
        QMessageBox::warning(this, "Export Error", e.what());
    }
}


void UserPage::refreshCartTable() {
    const auto& basket = service.getBasket();
    ui.cartTableWidget->setRowCount(static_cast<int>(basket.size()));
    ui.cartTableWidget->setColumnCount(5);
    QStringList headers = {"Size", "Colour", "Price", "Quantity", "Photo URL"};
    ui.cartTableWidget->setHorizontalHeaderLabels(headers);

    for (int row = 0; row < basket.size(); ++row) {
        const auto& coat = basket[row];
        ui.cartTableWidget->setItem(row, 0, new QTableWidgetItem(QString::fromStdString(coat.getSize())));
        ui.cartTableWidget->setItem(row, 1, new QTableWidgetItem(QString::fromStdString(coat.getColour())));
        ui.cartTableWidget->setItem(row, 2, new QTableWidgetItem(QString::number(coat.getPrice())));
        ui.cartTableWidget->setItem(row, 3, new QTableWidgetItem(QString::number(coat.getQuantity())));
        ui.cartTableWidget->setItem(row, 4, new QTableWidgetItem(QString::fromStdString(coat.getPhotograph())));
    }

    ui.cartTableWidget->resizeColumnsToContents();
}

void UserPage::updateTotal() {
    double total = service.getTotal();
    ui.totalPriceLineEdit->setText(QString::number(total, 'f', 2));
}
