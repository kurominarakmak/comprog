#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s;
    cin >> s;
    s = s + "$";
    vector<string> list;
    list.push_back(s);
    for(int i = 0; i < s.length()-1; i++){
        s = s.substr(1)+s.substr(0,1);
        list.push_back(s);
    }
    sort(list.begin(),list.end());
    vector<char>btw;
    for(int i = 0, n = list.size(); i < n; i++){
        btw.push_back(list[i][list[i].length()-1]);
    }
    for(int i = 0, n = btw.size(); i < n; i++){
        cout << btw[i];

    }
}