#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    vector<int> list;
    while(cin >> n){    
        list.push_back(n);
    }
    int c = 0;
    sort(list.begin(),list.end());
    vector<int> outcome;
    outcome.push_back(list[0]);
    c = 1;
    for(int i = 1; i < list.size(); i++){
        if(list[i] != list[i-1]){
            c++;
            outcome.push_back(list[i]);
        }
    }
    cout << c << endl;
    if(outcome.size() > 10){
        for(int i = 0; i < 10; i++){
            cout << outcome[i] << " ";
        }
    }else{
        for(int i = 0; i < c; i++){
            cout << outcome[i] << " ";
        }
    }
}