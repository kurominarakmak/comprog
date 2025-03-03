#include<iostream>
#include<set>
#include<algorithm>
using namespace std;
int main(){
    string s1, s2;
    getline(cin,s1);
    getline(cin,s2);
    multiset<char> m;
    multiset<char> n;
    for(char c : s1){
        if(c != ' '){
            m.insert(tolower(c));
        }
    }
    for(char c : s2){
        if(c != ' '){
            n.insert(tolower(c));
        }
    }
    if(m == n){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
}