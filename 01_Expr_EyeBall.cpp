#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int xe,ye,re,rp,xm,ym,A,B,C,a1,b1,c1,yp,xp ;
    cin >> xe ;
    cin >> ye ; 
    cin >> re ;
    cin >> rp ;
    cin >> xm ;
    cin >> ym  ;
    A = xm-xe ;
    B = ym -ye ;
    C = sqrt(pow(A,2)+pow(B,2));
    c1 = re- rp ;
    a1 = A * c1 / C ;
    b1 = B * c1 / C ;
    yp = b1+ye ;
    xp = a1+xe ;
    cout << round(xp) << " " << round(yp) << endl;
}