#include <iostream>
#include <string>
using namespace std;
int main() {
    string s;
    getline(cin,s);
    string word[s.length()];
    int c = 0;
    int d = 0;
    int poslast = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] != ' ') {
            c++;
        }
        else {
            word[d] = s.substr(i-c,c);
            c = 0;
            d++;
        }
        if (i == s.length()-1) {
            word[d] = s.substr(i-c+1,c);
        }
    }
    string first[2],last[2]={""};
    for (int i = 0; i < word[0].length(); i++) {
        if (word[0][i]=='a'|| word[0][i]=='e'||word[0][i]=='i'||word[0][i]=='o'||word[0][i]=='u') {
            first[0] = word[0].substr(0,i);
            last[0] = word[0].substr(i);
            break;
        }
    }
    for (int i = 0; i < word[d].length(); i++) {
        if (word[d][i]=='a'|| word[d][i]=='e'||word[d][i]=='i'||word[d][i]=='o'||word[d][i]=='u') {
            first[1] = word[d].substr(0,i);
            last[1] = word[d].substr(i);
            break;
        }
    }
    cout << first[0] << last[1] << ' ';
    for (int i = 1; i < d; i++) {
        cout << word[i] << ' ';
    }
    cout << first[1] << last[0];
}