#include<iostream>
#include<string>
using namespace std;
int main(){
    string line;
    getline(cin,line);
    int i = 0;
    while(i<=line.length()){
        if(line[i]=='('){
            line[i]='[';
        }else{
            if(line[i]=='['){
                line[i]='(';
            }else{
                if(line[i]==']'){
                    line[i] = ')';
                }else{
                    if(line[i]==')'){
                        line[i] = ']';
                    }
                }
            }
        }
        i++;
    }
    cout << line << endl;

}