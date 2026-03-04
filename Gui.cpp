#include "Gui.h"
#include <QHeaderView>
#include <QString>

Gui::Gui(TrenchCoatService& service, QWidget* parent)
        : QWidget(parent), service(service) {
    initUI();
    showStartPage();
}

void Gui::initUI() {
    QVBoxLayout* layout = new QVBoxLayout(this);
    stackedWidget = new QStackedWidget(this);
    layout->addWidget(stackedWidget);

    initStartPage();
    initAdminPage();
    initUserPage();

    stackedWidget->addWidget(startPage);
    stackedWidget->addWidget(adminPage);
    stackedWidget->addWidget(userPage);
}

void Gui::initStartPage() {
    startPage = new QWidget(this);
    QVBoxLayout* layout = new QVBoxLayout(startPage);
    adminButton = new QPushButton("Administrator Mode");
    userButton = new QPushButton("User Mode");
    layout->addWidget(adminButton);
    layout->addWidget(userButton);
    connect(adminButton, &QPushButton::clicked, this, &Gui::showAdminPage);
    connect(userButton, &QPushButton::clicked, this, &Gui::showUserPage);
}

void Gui::initAdminPage() {
    adminPage = new QWidget(this);
    QVBoxLayout* mainLayout = new QVBoxLayout(adminPage);

    table = new QTableWidget(0, 5);
    table->setHorizontalHeaderLabels({"Size", "Color", "Price", "Quantity", "Photo"});
    table->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    mainLayout->addWidget(table);

    QHBoxLayout* inputLayout = new QHBoxLayout();
    sizeInput = new QLineEdit(); colorInput = new QLineEdit();
    priceInput = new QLineEdit(); quantityInput = new QLineEdit(); photoInput = new QLineEdit();
    inputLayout->addWidget(sizeInput); inputLayout->addWidget(colorInput);
    inputLayout->addWidget(priceInput); inputLayout->addWidget(quantityInput); inputLayout->addWidget(photoInput);
    mainLayout->addLayout(inputLayout);

    QHBoxLayout* buttonLayout = new QHBoxLayout();
    addButton = new QPushButton("Add");
    removeButton = new QPushButton("Remove");
    updateButton = new QPushButton("Update");
    backToStartButtonAdmin = new QPushButton("Back");
    buttonLayout->addWidget(addButton);
    buttonLayout->addWidget(removeButton);
    buttonLayout->addWidget(updateButton);
    buttonLayout->addWidget(backToStartButtonAdmin);
    mainLayout->addLayout(buttonLayout);

    connect(backToStartButtonAdmin, &QPushButton::clicked, this, &Gui::showStartPage);
    populateTable();
}

void Gui::initUserPage() {
    userPage = new QWidget(this);
    QVBoxLayout* layout = new QVBoxLayout(userPage);

    QLabel* label = new QLabel("User Mode");
    label->setAlignment(Qt::AlignCenter);
    layout->addWidget(label);

    filterButton = new QPushButton("Filter by size");
    nextButton = new QPushButton("Next coat");
    addToBasketButton = new QPushButton("Add to basket");
    seeBasketButton = new QPushButton("See basket");
    exportButton = new QPushButton("Export basket");
    backToStartButtonUser = new QPushButton("Back");

    layout->addWidget(filterButton);
    layout->addWidget(nextButton);
    layout->addWidget(addToBasketButton);
    layout->addWidget(seeBasketButton);
    layout->addWidget(exportButton);
    layout->addWidget(backToStartButtonUser);

    connect(backToStartButtonUser, &QPushButton::clicked, this, &Gui::showStartPage);
}

void Gui::populateTable() {
    table->setRowCount(0);
    for (const auto& coat : service.getAll()) {
        int row = table->rowCount();
        table->insertRow(row);
        table->setItem(row, 0, new QTableWidgetItem(QString::fromStdString(coat.getSize())));
        table->setItem(row, 1, new QTableWidgetItem(QString::fromStdString(coat.getColour())));
        table->setItem(row, 2, new QTableWidgetItem(QString::number(coat.getPrice())));
        table->setItem(row, 3, new QTableWidgetItem(QString::number(coat.getQuantity())));
        table->setItem(row, 4, new QTableWidgetItem(QString::fromStdString(coat.getPhotograph())));
    }
}

void Gui::showStartPage() {
    stackedWidget->setCurrentWidget(startPage);
}

void Gui::showAdminPage() {
    stackedWidget->setCurrentWidget(adminPage);
    populateTable();
}

void Gui::showUserPage() {
    stackedWidget->setCurrentWidget(userPage);
}