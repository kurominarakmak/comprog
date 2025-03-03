#include <iostream>
#include <set>
#include <map>
using namespace std;
int main () {
    string x,y;
    set<string> temp, result;
    multimap<string, string> station;
    cin >> x;
    while (cin >> y) {
        station.insert(make_pair(x,y));
        cin >> x;
    }
    temp.insert(x);                                                                                                                                                                                                                                                                                                             
    for (auto& p : station) {
        if (p.first == x) {
            temp.insert(p.second);
        } else if (p.second == x) {
            temp.insert(p.first);
        }
    }
    result = temp;
    for (auto& p : station) {
        for (auto& x : temp) {
            if (p.first == x) {
                result.insert(p.second);
                break;
            } else if (p.second == x) {
                result.insert(p.first);
                break;
            }
        }
    }
    for (auto s : result) {
        cout << s << "\n";
    }
    return 0;
}