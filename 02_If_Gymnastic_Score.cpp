#include<iostream>
#include<cmath>
using namespace std;
int main(){
    double a,b,c,d,x,y,k;
    cin >> a >> b >> c >> d ;
    if (a>=b&&a>=c&&a>=d) {x=a;}
    if (b>=a&&b>=c&&b>=d) {x=b;}
    if (c>=b&&c>=a&&c>=d) {x=c;}
    if (d>=b&&d>=c&&d>=a) {x=d;}
    if (a<=b&&a<=c&&a<=d) {y=a;}
    if (b<=c&&b<=a&&b<=d) {y=b;}
    if (c<=b&&c<=a&&c<=d) {y=c;}
    if (d<=b&&d<=c&&d<=a) {y=d;}
    k = (a+b+c+d-x-y)/2 ;
    cout << round(k*100.0)/100.0 << endl ;

}