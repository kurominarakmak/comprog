#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int main(){
    int n; cin >> n;
    int a[n],b[n];
    for(int i = 0; i < n; i++){
        if( i%2 == 0){
            cin >> a[i] >> b[i];
        }else{
            cin >> b[i] >> a[i];
        }
    }
    int min1,max1,min2,max2;
    for(int i = 0; i < n; i++){
        if(i == 0){
            min1 = a[0];
            max1 = b[0];
            min2 = b[0];
            max2 = a[0];
        }else{
            min1 = min(min1,a[i]);
            max1 = max(max1,b[i]);
            min2 = min(min2,b[i]);
            max2 = max(max2,a[i]);
        }
    }
    string keyword;
    cin >> keyword;
    if(keyword == "Zig-Zag"){
        cout << min1 << " " << max1 ;
    }
    if(keyword == "Zag-Zig"){
        cout << min2 << " " << max2 ;
    }
}