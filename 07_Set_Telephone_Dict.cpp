#include<iostream>
#include<map>
using namespace std;
int main(){
    int n;
    cin >> n;
    string first,last,num,name;
    map<string,string> dict;
    for(int i = 0 ; i < n; i++){
        cin >> first >> last >> num;
        name = first + " " + last;
        dict[name] = num;
        dict[num] = name;
    }
    int m;
    cin >> m;
    string c;
    cin.ignore();
    while(getline(cin,c)){
        if(dict.find(c) != dict.end()){
            cout << c << " --> " << dict[c] << endl;
        }else{
            cout << c << " --> " << " Not found" << endl;
        }
    }
}