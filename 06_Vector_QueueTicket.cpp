#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main() {
    int N, n;
    string reset;
    cin >> N >> reset >> n;
    string command;
    double t1, t2;
    vector<int> ticketQueue; 
    vector<pair<int, double>> tickett1;
    int i = 0;
    bool l = 0;
    double qtime = 0.0;
    while (cin >> command) {
        if (command == "new") {
            cin >> t1;
            tickett1.push_back(make_pair(n, t1));
            ticketQueue.push_back(n);
            cout << ">> ticket " << n++ << endl;
        }
        else if (command == "next") {
            if (!ticketQueue.empty()) {
                cout << ">> call " << ticketQueue[0] << endl; 
                ticketQueue.erase(ticketQueue.begin()); 
                if (l) {
                    tickett1.erase(tickett1.begin()); 
                }
                l = 1;
            }
        }
        else if (command == "order") {
            cin >> t2;
            qtime += t2 - tickett1[i].second; 
            cout << ">> qtime " << tickett1[i].first << ' ' << t2 - tickett1[i].second << endl;
            i++;
            l = 0;
        }
        else if (command == "avg_qtime") {
            if (i > 0) {
                cout << ">> avg_qtime " << round(qtime / i * 100.0) / 100.0 << endl; 
            } else {
                cout << ">> avg_qtime 0" << endl;
            }
        }
    }
}