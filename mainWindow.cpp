#include "mainWindow.h"
#include "adminPage.h"
#include "userPage.h"

MainWindow::MainWindow(TrenchCoatService& service, QWidget *parent)
        : QMainWindow(parent), service(service) {
    ui.setupUi(this);

    connect(ui.adminButton, &QPushButton::clicked, this, [&]() {
        auto *admin = new AdminPage(service, nullptr);
        admin->setAttribute(Qt::WA_DeleteOnClose);
        admin->show();
    });

    connect(ui.userButton, &QPushButton::clicked, this, [&]() {
        auto *user = new UserPage(service, nullptr);
        user->setAttribute(Qt::WA_DeleteOnClose);
        user->show();
    });
}