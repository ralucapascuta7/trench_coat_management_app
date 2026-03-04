#ifndef A6_7_RALUCAPASCUTA7_EXPORT_H
#define A6_7_RALUCAPASCUTA7_EXPORT_H

#pragma once
#include "domain.h"
#include <vector>
#include <string>
using namespace std;

class Export {
public:
    static void exportToCSV(const vector<TrenchCoat>& basket, const string& filename);
    static void exportToHTML(const vector<TrenchCoat>& basket, const string& filename);
};

#endif //A6_7_RALUCAPASCUTA7_EXPORT_H
