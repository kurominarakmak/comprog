#include<iostream>
#include<cmath>
using namespace std;
int change_day(int d , int m , int y){
    int m1;
    if(m == 1) m1 = 0;
    if(m == 2) m1 = 31;
    if(m == 3) m1 = 59;
    if(m == 4) m1 = 90;
    if(m == 5) m1 = 120;
    if(m == 6) m1 = 151;
    if(m == 7) m1 = 181;
    if(m == 8) m1 = 212;
    if(m == 9) m1 = 243;
    if(m == 10) m1 = 273;
    if( m == 11) m1 = 304;
    if( m == 12) m1 =334;
    if(y%400==0||(y%4==0&&y%100!=0)&& m > 2) m1 = m1 +1;
    return (d+m1);
}
int main(){
    int d,m,y; cin >> d >> m >> y;
    int y1 = y-543;
    cout << change_day(d,m,y1) << endl;
}