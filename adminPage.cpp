#include "adminPage.h"
#include "chartPage.h"
#include <QMessageBox>
#include <QString>
#include <QTableWidgetItem>

AdminPage::AdminPage(TrenchCoatService& service, QWidget *parent)
        : QWidget(parent), service(service) {
    ui.setupUi(this);

    connect(ui.addButton, &QPushButton::clicked, this, &AdminPage::onAdd);
    connect(ui.removeButton, &QPushButton::clicked, this, &AdminPage::onRemove);
    connect(ui.updateButton, &QPushButton::clicked, this, &AdminPage::onUpdate);
    connect(ui.backButton, &QPushButton::clicked, this, &QWidget::close);
    connect(ui.chartButton, &QPushButton::clicked, this, &AdminPage::onChartButtonClicked);


    refreshTable();
}

void AdminPage::onAdd() {
    try {
        service.addCoat(
                ui.sizeLineEdit->text().toStdString(),
                ui.colourLineEdit->text().toStdString(),
                ui.priceDoubleSpinBox->value(),
                ui.quantitySpinBox->value(),
                ui.photoLineEdit->text().toStdString()
        );
        refreshTable();
    } catch (const std::exception& e) {
        QMessageBox::warning(this, "Error", e.what());
    }
}

void AdminPage::onRemove() {
    try {
        service.removeCoat(
                ui.sizeLineEdit->text().toStdString(),
                ui.colourLineEdit->text().toStdString()
        );
        refreshTable();
    } catch (const std::exception& e) {
        QMessageBox::warning(this, "Error", e.what());
    }
}

void AdminPage::onUpdate() {
    try {
        service.updateCoat(
                ui.sizeLineEdit->text().toStdString(),
                ui.colourLineEdit->text().toStdString(),
                ui.priceDoubleSpinBox->value(),
                ui.quantitySpinBox->value(),
                ui.photoLineEdit->text().toStdString()
        );
        refreshTable();
    } catch (const std::exception& e) {
        QMessageBox::warning(this, "Error", e.what());
    }
}

void AdminPage::onChartButtonClicked() {
    auto *chart = new ChartPage(service);
    chart->setAttribute(Qt::WA_DeleteOnClose);

    connect(chart, &ChartPage::backRequested, this, [=]() {
        this->show();
    });

    this->hide();
    chart->show();
}

void AdminPage::refreshTable() {
    const auto& coats = service.getAll();
    ui.coatTableWidget->setRowCount(static_cast<int>(coats.size()));
    ui.coatTableWidget->setColumnCount(5);
    QStringList headers = {"Size", "Colour", "Price", "Quantity", "Photo"};
    ui.coatTableWidget->setHorizontalHeaderLabels(headers);

    for (int row = 0; row < coats.size(); ++row) {
        const auto& coat = coats[row];
        ui.coatTableWidget->setItem(row, 0, new QTableWidgetItem(QString::fromStdString(coat.getSize())));
        ui.coatTableWidget->setItem(row, 1, new QTableWidgetItem(QString::fromStdString(coat.getColour())));
        ui.coatTableWidget->setItem(row, 2, new QTableWidgetItem(QString::number(coat.getPrice())));
        ui.coatTableWidget->setItem(row, 3, new QTableWidgetItem(QString::number(coat.getQuantity())));
        ui.coatTableWidget->setItem(row, 4, new QTableWidgetItem(QString::fromStdString(coat.getPhotograph())));
    }

    ui.coatTableWidget->resizeColumnsToContents();
}

