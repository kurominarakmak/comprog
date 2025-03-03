#include<iostream>
#include<vector>
#include<algorithm>
#include<tuple>
using namespace std;
int main(){
    int x;
    vector<int> y;
    while(cin >> x){
        y.push_back(x);
    }
    y.push_back(x+1);
    int s = 0, maxr = 1; 
    for(int i = 1, n= y.size(); i < n; i++){
        if(y[i-1] != y[i]){
            maxr = max(maxr,i-s);
            s = i;
        }
    }
    s = 0;
    vector<tuple<int,int,int>> ans;
    for(int i = 1, n= y.size(); i < n; i++){
        if(y[i-1] != y[i]){
            if(i-s == maxr)
                ans.push_back(make_tuple(y[i-1],s,i));
            s = i;
        }
    }
    sort(ans.begin(),ans.end());
    for(auto j : ans){
        cout << get<0>(j) << " --> x[ " << get<1>(j) << " : " << get<2>(j) << " ]" << endl;
    }
}