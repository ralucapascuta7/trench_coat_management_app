#include "domain.h"
#include <sstream>

using namespace std;

TrenchCoat::TrenchCoat(const string& size, const string& colour, double price, int quantity, const string& photograph)
        : size(size), colour(colour), price(price), quantity(quantity), photograph(photograph) {}

string TrenchCoat::getSize() const {
    // Returns the size of the trench coat.
    return size;
}
string TrenchCoat::getColour() const {
    // Returns the color of the trench coat.
    return colour;
}
double TrenchCoat::getPrice() const {
    // Returns the price of the trench coat.
    return price;
}
int TrenchCoat::getQuantity() const {
    // Returns the quantity of the trench coat in stock.
    return quantity;
}
string TrenchCoat::getPhotograph() const {
    // Returns the URL of the trench coat's photograph.
    return photograph;
}

void TrenchCoat::setPrice(double newPrice) {
    // Updates the price of the trench coat.
    price = newPrice;
}
void TrenchCoat::setQuantity(int newQuantity) {
    // Updates the quantity of the trench coat in stock.
    quantity = newQuantity;
}
void TrenchCoat::setPhotograph(const string& newLink) {
    // Updates the URL of the trench coat's photograph.
    photograph = newLink;
}

bool TrenchCoat::operator==(const TrenchCoat& other) const {
    // Compares two trench coats for equality based on size and color.
    return size == other.size && colour == other.colour;
}

ostream& operator<<(ostream& os, const TrenchCoat& coat) {
    os << coat.size << "," << coat.colour << "," << coat.price << "," << coat.quantity << "," << coat.photograph;
    return os;
}

istream& operator>>(istream& is, TrenchCoat& coat) {
    string line;
    if (getline(is, line)) {
        stringstream ss(line);
        string sizeStr, colourStr, priceStr, quantityStr, photoStr;

        getline(ss, sizeStr, ',');
        getline(ss, colourStr, ',');
        getline(ss, priceStr, ',');
        getline(ss, quantityStr, ',');
        getline(ss, photoStr);

        coat.size = sizeStr;
        coat.colour = colourStr;
        coat.price = stod(priceStr);
        coat.quantity = stoi(quantityStr);
        coat.photograph = photoStr;
    }
    return is;
}