#include <iostream>
#include <map>
using namespace std;
int main () {
    string song, name, genre, time;
    int minutes, seconds;
    map <string, int> mapgenretime;
    while (cin >> song >> name >> genre >> time) {
        minutes = stoi(time.substr(0, time.length() - 3));
        seconds = stoi(time.substr(time.length() - 2, 2)) + minutes * 60;
        mapgenretime[genre] += seconds;
    }
    map <int, string> mapsort;
    for (auto itr = mapgenretime.begin(); itr != mapgenretime.end(); itr++) {
        mapsort[-(*itr).second] = (*itr).first;
    }
    auto itr = mapsort.begin();
    for (int i = 0; i < min(3,(int)mapsort.size()); i++) {
        auto p = *(itr++);
        string mn = to_string((-p.first)/60);
        string sc = to_string((-p.first)%60);
        cout << p.second << " --> " << mn + ":" + sc << endl;
    }
}