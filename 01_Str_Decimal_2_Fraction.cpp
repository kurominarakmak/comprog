#include<iostream>
#include<string>
#include<cmath>
using namespace std;
long gcd(long l, long k) {
    if (k == 0) return l ;
    return gcd(k,l%k);
}
int main(){
    string a,b,c;
    int a1,b1,c1,x,a2,b2,c2,q,e,w,g;
    cin >> a >> b >> c ;
    a1 = stoi(a);
    b1 = stoi(b);
    c1 = stoi(c);
    a2 = a.length();
    b2 = b.length();
    c2 = c.length();
    q = pow(10,(b2+c2))- pow(10,b2);
    e = (b1*pow(10,c2))+c1-b1 ;
    w = (a1*q)+e ;
    g =gcd(q,w) ;
    cout << w/g << " " << "/" << " " << q/g << endl;
}