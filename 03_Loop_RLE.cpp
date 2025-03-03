#include<iostream>
#include<string>
using namespace std;
int main(){
    string s; cin >> s;
    char a = s[0];
    int c = 0;
    for(int i = 0; i < s.length(); i++){
        if(a == s[i]){
            c++;
        }else{
            cout << a << " " << c << " ";
            a = s[i]; 
            c = 0;
            i--;
        }
        if(i == s.length()-1){
            cout << a << " " << c;
        }
    }

}