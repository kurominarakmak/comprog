#include<iostream>
#include<string>
using namespace std;
int main(){
    string line;
    cin >> line;
    for(int i = 0; i < line.length(); i++){
        if(i == 0) cout << line[i];
        if(line[i] >= 'A' && line[i] <= 'Z' && i != 0){
            cout << ", " << line[i];
        }else if(line[i] >= '0' && line[i] <= '9'){
            cout << ", " ;
            for(int j = i ; j < line.length(); j++){
                if(line[j] >= '0' && line[j] <= '9'){
                    cout << line[j] ;
                }else{
                    i = j;
                    cout << ", " << line[j];
                    break;
                }
                if(j == line.length() - 1){
                    break;
                }
            }
        }else if(line[i] >= 'a' && line[i] <= 'z' && i != 0){
            cout << line[i];
        }
    }
}