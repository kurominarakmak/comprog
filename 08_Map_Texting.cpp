#include <iostream>
#include <map>
using namespace std;
int main() {
    string t;
    string cha = "abcdefghijklmnopqrstuvwxyz ";
    string op[] = {"2", "22", "222", "3", "33", "333", "4", "44", "444", 
                   "5", "55", "555", "6", "66", "666", "7", "77", "777","7777", 
                   "8", "88", "888", "9", "99", "999", "9999", "0"};
    map<char, string> t2k;
    map<string, char> k2t;
    for (int i = 0; i < cha.length(); i++) {
        t2k[cha[i]] = op[i];
        k2t[op[i]] = cha[i];

    }
    while (getline(cin, t)) {
        if (t.substr(0,3) == "T2K") {
            cout << ">> ";
            for (int i = 4; i < t.length(); i++) {
                string seq;
                if (t[i] >= 'A' && t[i] <= 'Z') {
                    t[i] = t[i] -'A'+'a';
                }
                cout << t2k[t[i]] << ' ';
            }
            cout << endl;
        } else if (t.substr(0,3) == "K2T") {
            cout << ">> ";
            for(int i = 4; i < t.length(); i++){
                string seq;
                while(i < t.length() && t[i] != ' '){
                    seq += t[i];
                    i++;
                }
                cout << k2t[seq];
            }
            cout << endl;

        }
    }

    return 0;
}
