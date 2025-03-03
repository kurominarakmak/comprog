#include<iostream>
#include<map>
using namespace std;
int main(){
    int n;
    cin >> n;
    map <string,string> x;
    string name,nickname;
    for(int i = 0; i < n; i++){
        cin >> name >> nickname;
        x[name] = nickname;
        x[nickname] = name;
    }
    int m;
    cin >> m;
    string a;
    for(int i = 0 ; i < m; i++){
        cin >> a;
        if(x.find(a) != x.end()){
            cout << x[a] << endl;
        }else{
            cout << "Not found" << endl;
        }
    }
}