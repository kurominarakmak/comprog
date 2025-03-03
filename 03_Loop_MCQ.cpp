#include<iostream>
#include<string>
using namespace std;

int main() {
    string key, ans;
    getline(cin, key);
    getline(cin, ans);

    if (key.length() == ans.length()) {
        int s = 0;
        for (int i = 0; i < key.length(); i++) {
            if (key[i] == ans[i]) {
                s++;
            }
        }
        cout << s << endl;
    } else {
        cout << "Incomplete answer" << endl;
    }
}
