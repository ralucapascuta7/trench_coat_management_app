#include <QApplication>
#include "mainWindow.h"
#include "repository.h"
#include "service.h"
#include "domain.h"

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    TrenchCoatRepository repo("trenchcoats.txt");

    if (repo.getAll().empty()) {
        repo.add(TrenchCoat("M", "black", 199.99, 5, "https://tinyurl.com/mr3heccn"));
        repo.add(TrenchCoat("L", "grey", 150, 3, "https://tinyurl.com/3k66vnnk"));
        repo.add(TrenchCoat("S", "beige", 180, 4, "https://tinyurl.com/5n7fxf73"));
        repo.add(TrenchCoat("M", "blue", 140, 6, "https://tinyurl.com/uydz88n6"));
        repo.add(TrenchCoat("XL", "red", 210, 2, "https://tinyurl.com/mujnda8h"));
        repo.add(TrenchCoat("XS", "pink", 160.67, 1, "https://tinyurl.com/bdftcb2z"));
        repo.add(TrenchCoat("M", "brown", 189.99, 3, "https://tinyurl.com/5r5jsps5"));
        repo.add(TrenchCoat("L", "white", 1000, 2, "https://tinyurl.com/36nwd5d7"));
        repo.add(TrenchCoat("S", "navy", 2000, 7, "https://tinyurl.com/ms3pxt3m"));
        repo.add(TrenchCoat("M", "green", 2045.99, 4, "https://tinyurl.com/mr2yknd8"));
        repo.saveToFile();
    }

    TrenchCoatService service(repo);
    MainWindow window(service);
    window.show();

    return app.exec();
}
