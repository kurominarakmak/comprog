#include<iostream>
#include<string>
using namespace std;
int main(){
    int n; cin >> n;
    string country[n]; int fee[n];
    for(int i = 0; i < n; i++){
        string x; int y;
        cin >> x >> y;
        country[i] = x;
        fee[i] = y;
    }
    cin.ignore();
    string s; getline(cin,s);
    int k = 0;
    string come[s.length()];
    for(int i = 0; i < s.length(); i++){
        if(i%7 == 4){
            for(int j = 0; j < n; j++){
                if(s.substr(i,2) == country[j]){
                    come[k] = s.substr(i,2);
                    k++;
                }
            }
        }
    }
    int amount = 0;
    for(int i = 0; i < k; i++){
        if(come[i] != come[i+1]){
            for(int j = 0; j < n; j++){
                if(come[i+1] == country[j]){
                    amount = amount + fee[j];
                }
            }
        }
    }
    cout << amount << endl;
    
}