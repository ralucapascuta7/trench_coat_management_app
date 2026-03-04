#include "chartPage.h"

ChartPage::ChartPage(TrenchCoatService& service, QWidget *parent)
        : QWidget(parent), service(service) {
    ui.setupUi(this);
    drawChart();

    connect(ui.backButton, &QPushButton::clicked, this, [=]() {
        emit backRequested();
        this->close();
    });
}

void ChartPage::drawChart() {
    auto *scene = new QGraphicsScene(this);
    ui.chartView->setScene(scene);

    int x = 0;
    int barWidth = 40;
    int spacing = 20;

    const auto& coats = service.getAll();
    for (const auto& coat : coats) {
        int height = coat.getQuantity() * 10;
        scene->addRect(x, 200 - height, barWidth, height, QPen(Qt::black), QBrush(Qt::blue));
        x += barWidth + spacing;
    }
}

