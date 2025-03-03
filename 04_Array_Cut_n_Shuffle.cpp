#include<iostream>
#include<string>
using namespace std;
int main(){
    int n; cin >> n;
    string c[n],h1[n/2],h2[n/2];
    string command,a;
    for(int i = 0; i < n; i++){
        cin >> a;
        c[i] = a;
    }
    cin.ignore();
    getline(cin,command);
    for(int i = 0; i < command.length(); i++){
        if(command[i] == 'C'){
            for(int j = 0; j < n/2; j++){
                swap(c[j],c[n/2+j]);
            }
        }
        if(command[i] == 'S'){
            for(int q = 0; q < n/2; q++){
                h1[q] = c[q];
            }
            for(int q = 0; q < n/2; q++){
                h2[q] = c[q+n/2];
            }
            for(int q = 0; q < n; q++){
                if(q%2 == 0){
                    c[q] = h1[q/2];
                }else{
                    c[q] = h2[q/2];
                }
            }
        }
    }
    for(int i = 0; i < n; i++){
        cout << c[i] << ' ' ;
    }
}