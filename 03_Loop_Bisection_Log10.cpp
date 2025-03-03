#include<iostream>
#include<cmath>
using namespace std;
int main(){
    double a,x;
    cin >> a;
    double L=0, U=a;
    x = (L+U)/2;
    while(abs(a-pow(10,x))> (pow(10,-10)*max(a,pow(10,x)))){
        if(pow(10,x)>a){
            U = x;
            x = (L+U)/2;
        }else{
            if(pow(10,x)<a){
                L = x;
                x = (L+U)/2 ;
            }
        }
    }
    cout << x << endl;
    
}