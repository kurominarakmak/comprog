#include<iostream>
#include<string>
using namespace std;
int main(){
    string line;
    cin >> line;
    int n; cin >> n;
    int c = 1, i = 1;
    string output = "";
    for(; i < line.length(); i++){
        if(line[i] == line[i-1]){
            c++;
        }else{
            if(c < n){
                output += string(c, line[i-1]);
            }
            c = 1;
        }
        if(c < n){
            output += string(c,line[i-1]);
        }
    }
    cout << output << endl;
}