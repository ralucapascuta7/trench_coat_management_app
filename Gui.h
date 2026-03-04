#ifndef A8_9_GUI_H
#define A8_9_GUI_H

#pragma once
#include <QWidget>
#include <QTableWidget>
#include <QPushButton>
#include <QLineEdit>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QStackedWidget>
#include <QLabel>
#include "service.h"

class Gui : public QWidget {
    Q_OBJECT

private:
    TrenchCoatService& service;
    QStackedWidget* stackedWidget;
    QWidget* startPage;
    QWidget* adminPage;
    QWidget* userPage;

    QTableWidget* table;
    QLineEdit *sizeInput, *colorInput, *priceInput, *quantityInput, *photoInput;
    QPushButton *addButton, *removeButton, *updateButton;
    QPushButton *adminButton, *userButton, *backToStartButtonAdmin, *backToStartButtonUser;
    QPushButton *filterButton, *nextButton, *addToBasketButton, *seeBasketButton, *exportButton;

    void initUI();
    void initStartPage();
    void initAdminPage();
    void initUserPage();
    void populateTable();

private slots:
            void showStartPage();
    void showAdminPage();
    void showUserPage();

public:
    Gui(TrenchCoatService& service, QWidget* parent = nullptr);
};



#endif
