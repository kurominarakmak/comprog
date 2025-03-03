#include <iostream>
#include <vector>
#include <tuple>
#include <algorithm>
using namespace std;

int main() {
    string pp;
    cin >> pp;
    int score;
    double sum = 0;
    vector<tuple<double, int, int, string>> party;

    while (pp != "END") {
        cin >> score;
        sum += score;
        party.push_back(make_tuple(0.0, 0, score, pp));
        cin >> pp;
    }

    double per = sum / 100.0;
    int total = 0;

    for (int i = 0; i < party.size(); i++) {
        double nss = get<2>(party[i]) / per;
        int allocatedSeats = (int)nss;
        total += allocatedSeats;
        get<1>(party[i]) = allocatedSeats;
        get<0>(party[i]) = nss - allocatedSeats;
    }

    sort(party.begin(), party.end(), [](const auto& a, const auto& b) {
        return get<0>(a) > get<0>(b);
    });

    for (int i = 0; i < party.size() && total < 100; i++) {
        get<1>(party[i]) += 1;
        total += 1;
    }

    sort(party.begin(), party.end(), [](const auto& a, const auto& b) {
        return get<2>(a) > get<2>(b);
    });

    for (int i = 0; i < party.size(); i++) {
        if (get<1>(party[i]) > 0) {
            cout << get<3>(party[i]) << " " << get<1>(party[i]) << " " << get<2>(party[i]) << endl;
        }
    }

    return 0;
}
