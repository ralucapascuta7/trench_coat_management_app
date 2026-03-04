#ifndef REPOSITORY_H
#define REPOSITORY_H

#include "domain.h"
#include <vector>
#include <algorithm>
#include <fstream>
#include <string>

class TrenchCoatRepository {
private:
    std::vector<TrenchCoat> coats;
    std::string filename;

public:
    TrenchCoatRepository(const std::string& filename = "");
    ~TrenchCoatRepository();

    bool add(const TrenchCoat& coat);
    bool remove(const TrenchCoat& coat);
    bool update(const TrenchCoat& coat);
    const std::vector<TrenchCoat>& getAll() const;
    const TrenchCoat* find(const TrenchCoat& coat) const;

    void saveToFile();
    void loadFromFile();
};

#endif
