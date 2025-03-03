#include<iostream>
using namespace std;
int main(){
    int n; cin >> n;
    int a[n*n];
    for(int i= 0; i < n*n; i++){
        cin >> a[i];
    }
    int inversions = 0;
    int position;
    for(int i = 0; i < n*n; i++){
        if(a[i] == 0){
            position = i;
        }
        for(int j = i+1; j < n*n; j++){
            if(a[i] != 0 && a[j] != 0 && a[i] > a[j]){
                inversions++;
            }
        }
    }
    if(n%2 == 1 && inversions%2 == 0){
        cout << "YES" << endl;
    }
    else if(n%2 == 0 && inversions%2 == 1 && (position/n % 2 == 0 )){
        cout << "YES" << endl;
    }
    else if(n%2 == 0 && inversions%2 == 0 && (position/n % 2 == 1 )){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
}