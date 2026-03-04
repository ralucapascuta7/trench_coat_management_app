#ifndef A8_9_USERPAGE_H
#define A8_9_USERPAGE_H

#pragma once

#include <QWidget>
#include <vector>
#include <QString>
#include "service.h"
#include "ui_user_page.h"

class UserPage : public QWidget {
Q_OBJECT

public:
    explicit UserPage(TrenchCoatService& service, QWidget *parent = nullptr);

private slots:
    void onFilter();
    void onOpenPhoto();
    void onAddToCart();
    void onNext();
    void onExportCart();

private:
    Ui::Form ui;
    TrenchCoatService& service;
    std::vector<TrenchCoat> filteredCoats;
    int currentIndex = 0;
    QString exportFormat = "csv";

    void showCurrentCoat();
    void clearDisplayFields();
    void refreshCartTable();
    void updateTotal();
};

#endif