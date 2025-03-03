#include<iostream>
#include<cmath>
using namespace std;
int main(){
    double n;
    cin >> n;
    double sum=0;
    double a=0;
    if(n==-1){
        cout << "No Data" << endl;
    }else{
        while(n!=-1){
            sum += n;
            cin >> n;
            a++;
        }
        double average =sum/a;
        cout << round(average*100)/100;
    }
}