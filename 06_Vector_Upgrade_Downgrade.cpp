#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;

string GRADE[] = {"F", "F", "D", "D+", "C", "C+", "B", "B+", "A", "A+"};

int main() {
    vector<pair<string, int>> data;
    string id, grade;
    int n;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> id >> grade;
        int gi = -1;
        for (int j = 0; j < 10; j++) {
            if (grade == GRADE[j]) {
                gi = j;
                break;
            }
        }
        if (gi != -1) {
            data.push_back(make_pair(id, gi));
        } else {
            cerr << "Invalid grade: " << grade << " for student ID: " << id << endl;
        }
    }

    while (cin >> id) {
        if (id.empty()) continue;
        char operation = id.back();
        id = id.substr(0, id.size() - 1);

        for (auto &itr : data) {
            if (itr.first == id) {
                if (operation == '+' && itr.second < 9) {
                    itr.second++;
                } else if (operation == '-' && itr.second > 0) {
                    itr.second--;
                }
                break;
            }
        }
    }

    sort(data.begin(), data.end(), [](const pair<string, int>& a, const pair<string, int>& b) {
        return a.second > b.second || (a.second == b.second && a.first < b.first);
    });

    for (const auto &p : data) {
        cout << p.first << ' ' << GRADE[p.second] << endl;
    }

    return 0;
}
