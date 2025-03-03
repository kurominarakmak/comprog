#include<iostream>
using namespace std;
int main(){
    long long int a,b,c,d,e; 
    cin >> a ;
    cin >> b ;
    cin >> c ;
    cin >> d ;
    cin >> e ;
    if(a>b) swap(a,b);
    if(c>d) swap(c,d);
    if(a>c){
        swap(b,d);
        c=a;
    }
    a = e ;
    if(a>b) swap(a,b);
    if(c>a){
        swap(b,d);
        a=c;
    }
    if(a>d){
        cout << d << endl;
    }else cout << a << endl;
}