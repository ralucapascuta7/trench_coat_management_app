#ifndef SERVICE_H
#define SERVICE_H

#include "repository.h"
#include <vector>
#include <string>
using namespace std;

class TrenchCoatService {
private:
    TrenchCoatRepository& repo;
    std::vector<TrenchCoat> basket;
    double total;

public:
    TrenchCoatService(TrenchCoatRepository& repo);

    bool addCoat(const std::string& size, const std::string& colour, double price, int quantity, const std::string& photograph);
    bool removeCoat(const std::string& size, const std::string& colour);
    bool updateCoat(const std::string& size, const std::string& colour, double price, int quantity, const std::string& photograph);
    const std::vector<TrenchCoat>& getAll() const;

    std::vector<TrenchCoat> getBySize(const std::string& size) const;

    void addToBasket(const TrenchCoat& coat);
    const std::vector<TrenchCoat>& getBasket() const;
    double getTotal() const;

    void exportBasketToFile(const string& type, const string& filename);
};

#endif
