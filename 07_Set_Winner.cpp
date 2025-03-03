#include<iostream>
#include<set>
using namespace std;
int main(){
    string a;
    string b;
    set<string> w;
    set<string> l;
    while(cin >> a){
        cin >> b;
        w.insert(a);
        l.insert(b);
    }
    set<string> final;
    for(auto &x : w){
       if(l.find(x) == l.end() ){
        final.insert(x);
       }
    }
    if(final.empty()){
        cout << "None" << endl;
    }else{
        for(auto &x : final){
            cout << x << " ";
        }
    }
}