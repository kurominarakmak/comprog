#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>
using namespace std;
int main () {
    int n;
    cin >> n;
    string ID, city;
    vector <string> vID;
    unordered_map <string, map <string, int> > mapIDvcity;
    while (n--) {
        string id; cin >> id;
        vID.push_back(id);
        while(1){
            string city; cin >> city;
            if(city == "*") break;
            mapIDvcity[id][city] = 1;
        }
    }
    string keyID;
    cin >> keyID;
    int cnt = 0;
    for(auto i : vID){
        if(i == keyID) continue;
        for(auto j : mapIDvcity[keyID])
            if(mapIDvcity[i].find(j.first) != mapIDvcity[i].end()){
                cout << ">> " << i << "\n";
                cnt++; 
                break;
            }
    }
    if (cnt == 0) {
        cout << ">> Not Found";
    }
}