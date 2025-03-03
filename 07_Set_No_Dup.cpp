#include<iostream>
#include<set>
using namespace std;
int main(){
    int n;
    set<int> a;
    int m = a.size();
    while(cin >> n){
        a.insert(n);
        if(m == a.size()){
            cout << a.size()+1;
            return 0;
        }else{
            m = a.size();
        }
    }
    cout << "-1" << endl;
}