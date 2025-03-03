#include<iostream>
#include<string>
using namespace std;
int main(){
    unsigned int n; cin >> n;
    string x;
    string fullname[10] = {"Robert","William","James","John","Margaret","Edward","Sarah","Andrew","Anthony","Deborah" };
    string nickname[10] = {"Dick","Bill","Jim","Jack","Peggy","Ed","Sally","Andy","Tony","Debbie"};
    for(int i = 0; i < n; i++){
        cin >> x;
        bool s = false;
        for(int i = 0; i < 10; i++){
            if(x == fullname[i]){
                cout << nickname[i] << endl;
                s = true;
            }
            if(x == nickname[i]){
                    cout << fullname[i] << endl;
                    s = true;
            }
        }
        if( s == false) cout << "Not found" << endl;
        
    }

}