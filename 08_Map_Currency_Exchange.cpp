#include<iostream>
#include<map>
using namespace std;
int main(){
    int n;
    cin >> n;
    map<string, double> rate;
    double exchange;
    string unit;
    rate["THB"] = 1;
    for(int i = 0; i <n; i++){
        cin >> unit >> exchange;
        rate[unit] = exchange;
    }
    int sum;
    cin >> sum >> unit;
    cout << sum << ' ' << unit;
    string next;
    while(cin >> next){
        sum = int(sum*rate[unit]/rate[next]);
        unit = next;
        cout <<  " -> " << sum << ' ' << unit ;
    }
}