#include<iostream>
#include<string>
using namespace std;
int main(){
    int h, a= 0;
    cin >> h;
    while(a<h-1){
        cout << ".";
        a++ ;
    } cout << "*" << endl;
    int i = 0;
    while(i<h-2){
        int j = 0;
        while(j<h-2-i){
            cout << ".";
            j++;
        } cout << "*" ;
        int b = 0;
        while(b<(2*(i))+1){
            cout << "." ;
            b++;
        }
        cout << "*" << endl;
        i++;
    }
    int k = 0;
    while(k<2*h-2){
        cout << "*" ;
        k++ ;
    }cout << "*" << endl;
}