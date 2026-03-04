#ifndef DOMAIN_H
#define DOMAIN_H

#include <string>
#include <iostream>

class TrenchCoat {
private:
    std::string size;
    std::string colour;
    double price;
    int quantity;
    std::string photograph;

public:
    TrenchCoat(const std::string& size = "", const std::string& colour = "", double price = 0, int quantity = 0, const std::string& photograph = "");

    std::string getSize() const;
    std::string getColour() const;
    double getPrice() const;
    int getQuantity() const;
    std::string getPhotograph() const;

    void setPrice(double newPrice);
    void setQuantity(int newQuantity);
    void setPhotograph(const std::string& newLink);

    bool operator==(const TrenchCoat& other) const;

    // Add insertion and extraction operators as friends
    friend std::ostream& operator<<(std::ostream& os, const TrenchCoat& coat);
    friend std::istream& operator>>(std::istream& is, TrenchCoat& coat);
};

// Declare the operators
std::ostream& operator<<(std::ostream& os, const TrenchCoat& coat);
std::istream& operator>>(std::istream& is, TrenchCoat& coat);

#endif
