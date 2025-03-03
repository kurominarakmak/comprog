#include<iostream>
using namespace std;
int main(){
    string line;
    getline(cin,line);
    int a[26] = {0};
    for(char c: line){
        if(c>='a' && c<='z'){
            a[c-'a']++;
        }else{
            if(c >='A' && c <= 'Z'){
                a[c-'A']++;
            }
        }
    }
    for(int i = 0; i < 26; i++){
        if(a[i] != 0){
            cout << char (i+'a') << " -> " << a[i] << endl; 
        }
    }
}