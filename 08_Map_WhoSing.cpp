#include<iostream>
#include<map>
#include<vector>
using namespace std;
int main(){
    int n;
    cin >> n;
    cin.ignore();
    map<string,vector<string>> data;
    string line;
    for(int i = 0; i<n; i++){
       getline(cin,line);
       int pos = line.find(", ");
       string song = line.substr(0,pos);
       string artist = line.substr(pos+2);
       data[song].push_back(artist);
    }
    string q;
    getline(cin,q);
    int s =0, p;
    while((p = q.find(", ",s)) != -1){
        string qs = q.substr(s,p-s);
        s = p+2;
        cout << qs << " -> ";
        if(data.find(qs) != data.end()){
            const vector<string>& artists = data[qs];
            for(int i = 0; i < artists.size(); i++){
                if(i > 0) cout << ", ";
                cout << artists[i];
            }
        } else {
            cout << " Not found";
        }
        cout << endl;
    }
    if(s < q.size()){
        string qs = q.substr(s);
        cout << qs << " -> ";
        if(data.find(qs) != data.end()){
            const vector<string>& artists = data[qs];
            for(int i = 0; i < artists.size(); i++){
                if(i>0) cout << ", ";
                cout << artists[i];
            }
        }else {
            cout << " Not found";
        }
        cout << endl;
    }
}