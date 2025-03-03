#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int main(){
    string n;
    int n0,n1,n2,n3,n4,n5,n6,n7,n8,n9,n10,n11,n12 ;
    cin >> n ;
    n0 = n[0]-'0' ;
    n1 = n[1]-'0' ;
    n2 = n[2]-'0' ;
    n3 = n[3]-'0' ;
    n4 = n[4]-'0' ;
    n5 = n[5]-'0' ;
    n6 = n[6]-'0' ;
    n7 = n[7]-'0' ;
    n8 = n[8]-'0' ; 
    n9 = n[9]-'0' ;
    n10 = n[10]-'0' ;
    n11 = n[11]-'0' ;
    n12 = (11-(13*n0+12*n1+11*n2+10*n3+9*n4+8*n5+7*n6+6*n7+5*n8+4*n9+3*n10+2*n11)%11)%10;
    cout << n0 << '-' << n1 << n2 << n3 << n4 << '-' << n5 << n6 << n7 << n8 << n9 << '-' << n10 << n11 << '-' << n12 << endl;
}
