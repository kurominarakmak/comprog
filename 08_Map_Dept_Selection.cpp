#include<iostream>
#include<map>
#include<vector>
#include<utility>
using namespace std;
int main(){
    int n; cin >> n;
    map<string,int> dept;
    for(int i = 0; i < n;i++){
        string a; int num;
        cin >> a >> num;
        dept[a] = num;
    }
    int m; cin >> m;
    string id,rank1,rank2,rank3,rank4; double score;
    map<double,pair<string,vector<string>>> x;
    for(int i = 0; i < m; i++){
        cin >> id >> score >> rank1 >> rank2 >> rank3 >> rank4;
        vector<string>rank;
        rank.push_back(rank1);
        rank.push_back(rank2);
        rank.push_back(rank3);
        rank.push_back(rank4);
        x[-score] = make_pair(id,rank);
    }
    map<string,string>field;
    for(auto &itr: x){
        for(auto &i : itr.second.second){
            if(dept[i] > 0){
                dept[i]--;
                field[itr.second.first] = i;
                break;
            }
        }
    }
    for(auto &itr:field){
        cout << itr.first << ' ' << itr.second << endl;
    }
}