#include<iostream>
#include<string>
using namespace std;
int main(){
    string x; 
    cin >> x;
    auto y = x.substr(0,2);
    if(x.length()==10){
        if(y == "06" || y == "08" || y == "09" ){
            cout << "Mobile number" << endl;
        } else {
            cout << "Not a mobile number" << endl;}
    }else cout << "Not a mobile number" << endl;
}