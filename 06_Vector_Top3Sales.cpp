#include <iostream>
#include <vector>
#include <tuple>
#include <algorithm>
#include <string>
#include <map>
using namespace std;

int main() {
    string productCode;
    double price;
    map<string, double> itemPrices;

    while (cin >> productCode) {
        if (productCode == "END") {
            break;
        }
        cin >> price;
        itemPrices[productCode] = price;
    }

    string soldProduct;
    map<string, int> salesCount;

    while (cin >> soldProduct) {
        if (itemPrices.find(soldProduct) != itemPrices.end()) {
            salesCount[soldProduct]++;
        }
    }

    vector<pair<double, string>> salesData;

    for (const auto& sale : salesCount) {
        const string& product = sale.first;
        int count = sale.second;
        double totalSales = count * itemPrices[product];
        salesData.push_back(make_pair(totalSales, product));
    }

    sort(salesData.begin(), salesData.end(), [](const pair<double, string>& a, const pair<double, string>& b) {
        if (a.first == b.first) {
            return a.second < b.second;
        }
        return a.first > b.first;
    });

    if (salesData.empty()) {
        cout << "No Sales" << endl;
    } else {
        for (int i = 0; i < min(3, static_cast<int>(salesData.size())); i++) {
            cout << salesData[i].second << " " << salesData[i].first << endl;
        }
    }

    return 0;
}
