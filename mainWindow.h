#ifndef A8_9_MAINWINDOW_H
#define A8_9_MAINWINDOW_H

#pragma once

#include <QMainWindow>
#include "service.h"
#include "ui_main_window.h"

class MainWindow : public QMainWindow {
Q_OBJECT

public:
    explicit MainWindow(TrenchCoatService& service, QWidget *parent = nullptr);

private:
    Ui::MainWindow ui;
    TrenchCoatService& service;
};


#endif