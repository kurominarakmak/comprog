#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n; cin >> n;
    int road[n];
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        road[i] = x;
    }
    int sum = 0;
    for(int i = 1; i < n-1; ++i){
        int maxrr, maxrl;
        for(int j = i; j < n; ++j){
            if(j==i){
                maxrr = max(road[j+1],road[j]);
            }else{
                maxrr = max(road[j+1],maxrr) ;
            }
        }
        for(int j = i; j >= 0; --j){
            if(j==i){
                maxrl = max(road[j],road[j-1]);
            }else{
                maxrl = max(road[j-1],maxrl);
            }
        }
        int newdiff = min(maxrr,maxrl)-road[i];
        if(newdiff >= 0){
            sum = sum + newdiff;
        }
    }
    cout << sum << endl;
}