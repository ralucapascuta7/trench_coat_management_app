#ifndef A8_9_CHARTPAGE_H
#define A8_9_CHARTPAGE_H

#pragma once

#include <QWidget>
#include <QGraphicsScene>
#include "ui_chart_page.h"
#include "service.h"

class ChartPage : public QWidget {
Q_OBJECT

public:
    explicit ChartPage(TrenchCoatService& service, QWidget *parent = nullptr);

signals:
    void backRequested();

private:
    Ui::chartPage ui;
    TrenchCoatService& service;

    void drawChart();
};

#endif
