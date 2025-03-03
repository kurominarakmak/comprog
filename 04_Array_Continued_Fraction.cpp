#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int n; cin >> n;
    double a[n],c[n];
    double x;
    for(int i = 0; i < n; i++){
        cin >> x;
        a[i] = x;
    }
    for(int i = 0; i < n; i++){
        double x = a[i];
        for(int j = i-1; j >= 0; j--){
            x = a[j] + 1/x;
        }
        cout << setprecision(10) << x << endl;
    }
}