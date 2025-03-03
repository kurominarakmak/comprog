#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int d,m,y,a,b,c,y1,y2,d1;
    cin >> d >> m >> y >> a >> b >> c;
    if((y-543)%4 == 0){
        y1 = 366;
    }else y1 = 365;
    if((c-543)%4==0){
        y2 = 366;
    }else y1 =365;
    int black = (c-y-1)*365; int mr,mb ;
    if(m == 1) mr = 31; if(b == 1) mb = 0; if(m == 1) d1 = 31;
    if(m == 2) mr = 59; if(b == 2) mb = 31; if(m == 2) d1 = 28;
    if(m == 3) mr = 90; if(b == 3) mb = 59; if(m == 3) d1 = 31;
    if(m == 4) mr = 120; if(b == 4) mb = 90; if(m == 4) d1 = 30;
    if(m == 5) mr = 151; if(b == 5) mb = 120; if(m == 5) d1 = 31;
    if(m == 6) mr = 181; if(b == 6) mb = 151; if(m == 6) d1 = 30;
    if(m == 7) mr = 212; if(b == 7) mb = 181; if(m == 7) d1 = 31;
    if(m == 8) mr = 243; if(b == 8) mb = 212; if(m == 8) d1 = 31;
    if(m == 9) mr = 273; if(b == 9) mb = 243; if(m == 9) d1 = 30;
    if(m == 10) mr = 304; if(b == 10) mb = 273; if(m == 10) d1 = 31;
    if(m == 11) mr = 334; if(b == 11) mb = 304; if(m == 11) d1 = 30;
    if(m == 12) mr = 365; if(b == 12) mb = 334; if(m == 12) d1 = 31;
    if((y-543)%4 == 0 && m >2 ) mr = mr+1;
    if((c-543)%4 == 0 && b >2) mb = mb + 1 ;
    if((y-543)%4 == 0 && m ==2) d1 =29;
    int totalred = y1-mr+d1-d; int totalblue = a+mb;int t = totalred+totalblue+black;
    double emotion = sin(2*M_PI*t/23);
    double physic = sin(2*M_PI*t/28);
    double intel = sin(2*M_PI*t/33);
    cout<< t <<  " " << round(emotion*100.0)/100.0 << " " <<round(physic*100.0)/100.0 << " " << round(intel*100.0)/100.0 << endl;

}