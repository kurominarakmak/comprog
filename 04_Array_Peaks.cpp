#include<iostream>
using namespace std;
int main(){
    int n; cin >> n;
    int x;
    int value[n] ;
    for(int i = 0; i < n; i++){
        cin >> x;
        value[i] = x;
    }
    int c = 0;
    for(int i = 1; i < n-1; i++){
        if(value[i] > value[i-1] && value[i] > value[i+1] ){
            c++;
        }
        
    }
    cout << c << endl;
}