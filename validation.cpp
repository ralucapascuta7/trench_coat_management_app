#include "validation.h"
#include <cctype>
#include <string>
using namespace std;

bool Validator::validate_color_product(const string& color) {
    for(char i : color)
        if(isdigit(i))
            return false;
    return true;
}

bool Validator::validate_size_product(const string& size) {
    return size == "XXS" || size == "XS" || size == "S" || size == "M" ||
           size == "L" || size == "XL" || size == "XXL";
}

int Validator::validate_price_product(const string& price) {
    if(price.empty())
        return -1;
    for(char i : price)
        if(isalpha(i))
            return -1;
    return stoi(price);
}

bool Validator::validate_photograph_product(const string& photograph) {
    if(photograph.length() < 13)
        return false;
    if(photograph.substr(0, 8) != "https://")
        return false;
    if(photograph.find(".com") == string::npos && photograph.find(".jpg") == string::npos)
        return false;
    return true;
}

int Validator::validate_quantity_product(const string& quantity) {
    if(quantity.empty())
        return -1;
    for(char i : quantity)
        if(isalpha(i))
            return -1;
    return stoi(quantity);
}
