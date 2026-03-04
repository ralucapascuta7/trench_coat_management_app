#include "repository.h"
#include <algorithm>
#include <fstream>

using namespace std;

TrenchCoatRepository::TrenchCoatRepository(const string& filename) : filename(filename) {
    if (!filename.empty()) {
        loadFromFile();
    }
}

TrenchCoatRepository::~TrenchCoatRepository() {
    if (!filename.empty()) {
        saveToFile();
    }
}

bool TrenchCoatRepository::add(const TrenchCoat& coat) {
    /*
     * Adds a TrenchCoat to the repository if it doesn't already exist.
     * Returns: true if added, false otherwise.
     */
    if (find(coat) != nullptr)
        return false;
    coats.push_back(coat);
    if (!filename.empty()) {
        saveToFile();
    }
    return true;
}

bool TrenchCoatRepository::remove(const TrenchCoat& coat) {
    /*
     * Removes a TrenchCoat from the repository if it exists.
     * Returns: true if removed, false otherwise.
     */
    auto it = find_if(coats.begin(), coats.end(),
                      [&coat](const TrenchCoat& c) { return c == coat; });

    if (it != coats.end()) {
        coats.erase(it);
        if (!filename.empty()) {
            saveToFile();
        }
        return true;
    }
    return false;
}

bool TrenchCoatRepository::update(const TrenchCoat& coat) {
    /*
     * Updates an existing TrenchCoat in the repository.
     * Returns: true if updated, false otherwise.
     */
    auto it = find_if(coats.begin(), coats.end(),
                      [&coat](const TrenchCoat& c) { return c == coat; });

    if (it != coats.end()) {
        *it = coat;
        if (!filename.empty()) {
            saveToFile();
        }
        return true;
    }
    return false;
}

const vector<TrenchCoat>& TrenchCoatRepository::getAll() const {
    /*
     * Retrieves all TrenchCoat objects in the repository.
     */
    return coats;
}

const TrenchCoat* TrenchCoatRepository::find(const TrenchCoat& coat) const {
    /*
     * Searches for a TrenchCoat in the repository.
     * Returns: A pointer to the TrenchCoat if found, nullptr otherwise.
     */
    auto it = find_if(coats.begin(), coats.end(),
                      [&coat](const TrenchCoat& c) {
        return c == coat;
    });

    if (it != coats.end()) {
        return &(*it);
    }
    return nullptr;
}

void TrenchCoatRepository::saveToFile() {
    ofstream outFile(filename);
    if (!outFile.is_open()) {
        throw runtime_error("Could not open file for writing: " + filename);
    }

    for (const auto& coat : coats) {
        outFile << coat << endl;
    }

    outFile.close();
}

void TrenchCoatRepository::loadFromFile() {
    ifstream inFile(filename);
    if (!inFile.is_open()) {
        return;
    }

    coats.clear();
    TrenchCoat coat;

    while (inFile >> coat) {
        coats.push_back(coat);
    }

    inFile.close();
}