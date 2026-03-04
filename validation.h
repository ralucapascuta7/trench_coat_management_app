#ifndef A6_7_RALUCAPASCUTA7_VALIDATION_H
#define A6_7_RALUCAPASCUTA7_VALIDATION_H

#pragma once
#include <string>
using namespace std;

class Validator {
public:
    static bool validate_color_product(const string& color);
    static bool validate_size_product(const string& size);
    static int validate_price_product(const string& price);
    static bool validate_photograph_product(const string& photograph);
    static int validate_quantity_product(const string& quantity);
};

#endif //A6_7_RALUCAPASCUTA7_VALIDATION_H
