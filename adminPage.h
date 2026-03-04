#ifndef A8_9_ADMINPAGE_H
#define A8_9_ADMINPAGE_H

#pragma once

#include <QWidget>
#include "ui_admin_page.h"
#include "service.h"

class AdminPage : public QWidget {
    Q_OBJECT

public:
    explicit AdminPage(TrenchCoatService& service, QWidget *parent = nullptr);

private slots:
    void onAdd();
    void onRemove();
    void onUpdate();
    void onChartButtonClicked();

private:
    Ui::adminPage ui;
    TrenchCoatService& service;

    void refreshTable();
};

#endif
