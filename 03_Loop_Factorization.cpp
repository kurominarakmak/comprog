#include<iostream>
using namespace std;
int main(){
    long long int n; 
    cin >> n;
    int k = 2;
    while(k<=n){
        while(n%k==0){
            cout << k;
            n = n/k;
            if(n>1){
                cout << "*";
            }
        }
        k++;
    }

}