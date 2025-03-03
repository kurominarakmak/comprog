#include<iostream>
#include<string>
using namespace std;
int main(){
    int x; cin >> x;
    if( x > 0 )  cout << "positive" << endl;
    if( x == 0) cout  << "zero" << endl;
    if(x < 0) cout << "negative" << endl;
    if(x % 2 == 0){
        cout << "even" << endl;
    }else cout << "odd" << endl;
}