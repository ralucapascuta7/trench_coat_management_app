#include "service.h"
#include <algorithm>
#include "validation.h"
#include "exceptions.h"
#include "export.h"

using namespace std;

TrenchCoatService::TrenchCoatService(TrenchCoatRepository& repo) : repo(repo), total(0) {}

bool TrenchCoatService::addCoat(const string& size, const string& colour, double price, int quantity, const string& photograph) {
    /*
     * Adds a trench coat to the repository if it doesn't already exist.
     * Returns: true if added, false otherwise.
     */
    if (!Validator::validate_size_product(size))
        throw ExceptionsValidator("Invalid size.");
    if (!Validator::validate_color_product(colour))
        throw ExceptionsValidator("Invalid color.");
    if (price <= 0)
        throw ExceptionsValidator("Price must be greater than 0.");
    if (quantity < 0)
        throw ExceptionsValidator("Quantity must be 0 or more.");
    if (!Validator::validate_photograph_product(photograph))
        throw ExceptionsValidator("Invalid photograph URL.");

    if (!repo.add(TrenchCoat(size, colour, price, quantity, photograph)))
        throw ExceptionsRepository("This coat already exists.");

    return repo.add(TrenchCoat(size, colour, price, quantity, photograph));
}

bool TrenchCoatService::removeCoat(const string& size, const string& colour) {
    /*
     * Removes a trench coat from the repository if it exists.
     * Returns: true if removed, false otherwise.
     */
    if (!Validator::validate_size_product(size))
        throw ExceptionsValidator("Invalid size.");
    if (!Validator::validate_color_product(colour))
        throw ExceptionsValidator("Invalid color.");

    if (!repo.remove(TrenchCoat(size, colour)))
        throw ExceptionsRepository("Coat not found for removal.");

    return repo.remove(TrenchCoat(size, colour));
}

bool TrenchCoatService::updateCoat(const string& size, const string& colour, double price, int quantity, const string& photograph) {
    /*
     * Updates an existing trench coat in the repository.
     * Returns: true if updated, false otherwise.
     */
    if (!Validator::validate_size_product(size))
        throw ExceptionsValidator("Invalid size.");
    if (!Validator::validate_color_product(colour))
        throw ExceptionsValidator("Invalid color.");
    if (price <= 0)
        throw ExceptionsValidator("Price must be greater than 0.");
    if (quantity < 0)
        throw ExceptionsValidator("Quantity must be 0 or more.");
    if (!Validator::validate_photograph_product(photograph))
        throw ExceptionsValidator("Invalid photograph URL.");

    if (!repo.update(TrenchCoat(size, colour, price, quantity, photograph)))
        throw ExceptionsRepository("Coat not found for update.");

    return repo.update(TrenchCoat(size, colour, price, quantity, photograph));
}

const vector<TrenchCoat>& TrenchCoatService::getAll() const {
    /*
     * Retrieves all trench coats from the repository.
     */
    return repo.getAll();
}

vector<TrenchCoat> TrenchCoatService::getBySize(const string& size) const {
    /*
     * Filters trench coats by size. If the size is empty, returns all coats.
     * Returns: A vector of filtered trench coats.
     */
    if (!size.empty() && !Validator::validate_size_product(size))
        throw ExceptionsValidator("Invalid size.");

    vector<TrenchCoat> filtered;
    const auto& allCoats = repo.getAll();

    if (size.empty()) {
        return allCoats;
    } else {
        copy_if(allCoats.begin(), allCoats.end(), back_inserter(filtered),
                [&size](const TrenchCoat& coat) {
            return coat.getSize() == size;
        });
        return filtered;
    }
}

void TrenchCoatService::addToBasket(const TrenchCoat& coat) {
    /*
     * Adds a trench coat to the shopping basket and updates the total price.
     * Finds the coat in the repository and decreases its quantity.
     */
    const auto& allCoats = repo.getAll();
    auto it = find_if(allCoats.begin(), allCoats.end(),
                      [&coat](const TrenchCoat& c) {
        return c == coat;
    });

    if (it != allCoats.end()) {
        TrenchCoat repoCoat = *it;

        if (repoCoat.getQuantity() > 0) {
            int newQuantity = repoCoat.getQuantity() - 1;
            repoCoat.setQuantity(newQuantity);

            basket.push_back(coat);
            total += coat.getPrice();

            repo.update(repoCoat);
        } else {
            throw ExceptionsRepository("Cannot add to basket: Coat is out of stock.");
        }
    }
}

const vector<TrenchCoat>& TrenchCoatService::getBasket() const {
    /*
     * Retrieves all trench coats in the shopping basket.
     */
    return basket;
}

double TrenchCoatService::getTotal() const {
    /*
     * Retrieves the total price of the trench coats in the basket.
     * Returns: The total price as a double.
     */
    return total;
}

void TrenchCoatService::exportBasketToFile(const string& type, const string& filename) {
    if (type == "csv")
        Export::exportToCSV(basket, filename);
    else
        Export::exportToHTML(basket, filename);
}
