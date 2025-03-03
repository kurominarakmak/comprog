#include<iostream>
#include<set>
#include<vector>
#include<string>
using namespace std;
int main(){
    vector<set<int>> group;
    set<int> U;
    string s;
    while(getline(cin,s)){
        s = s+ " ";
        set<int> a;
        int c = 0;
        bool has = false;
        for(char ch : s){
            if(isdigit(ch)){
                c = (c*10) + (ch - '0');
                has = true;
            }else if(has == true){
                a.insert(c);
                U.insert(c);
                c = 0;
                has = false;
            }
        }
        group.push_back(a);
    }
    //U
    cout << "U: " ;
    for(auto &x : U){
        cout << x << ' ';
    }cout << endl;
    //i
    set<int> I = group[0];
    for(int i = 1; i < group.size(); i++){
        for(auto itr = I.begin(); itr != I.end();){
            if(group[i].find(*itr) == group[i].end()){
                itr = I.erase(itr);
            }else{
                itr++;
            }
        }
    }
    cout << "I: ";
    for(auto &x : I){
        cout << x << ' ';
    } 
    if(I.size() == 0){
        cout << "empty set";
    }
    cout << endl;
    //D
    set<int> D = group[0];
    for(int i = 1; i < group.size(); i++){
        for(auto itr = D.begin(); itr != D.end();){
            if(group[i].find(*itr) != group[i].end()){
                itr = D.erase(itr);
            }else {
                itr ++;
            }
        }
    }
    cout << "D: ";
    for(auto &x : D){
        cout << x << ' ';
    }
    if(D.size() == 0){
        cout << "empty set";
    }
    cout << endl;
}