#include "export.h"
#include <fstream>

void Export::exportToCSV(const vector<TrenchCoat>& basket, const string& filename) {
    ofstream fout(filename);
    for (const auto& coat : basket) {
        fout << coat.getSize() << "," << coat.getColour() << ","
             << coat.getPrice() << "," << coat.getQuantity() << ","
             << coat.getPhotograph() << "\n";
    }
}

void Export::exportToHTML(const vector<TrenchCoat>& basket, const string& filename) {
    ofstream fout(filename);
    fout << "<html><body><table border='1'>\n";
    fout << "<tr><th>Size</th><th>Colour</th><th>Price</th><th>Quantity</th><th>Photograph</th></tr>\n";
    for (const auto& coat : basket) {
        fout << "<tr><td>" << coat.getSize() << "</td><td>"
             << coat.getColour() << "</td><td>" << coat.getPrice()
             << "</td><td>" << coat.getQuantity() << "</td><td>"
             << "<a href='" << coat.getPhotograph() << "'>Link</a></td></tr>\n";
    }
    fout << "</table></body></html>\n";
}

