#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    while(getline(cin,s)){
        string result = "";
        char special = s[s.length()-1];
        for(int i = 0; i < s.length(); i++){
            int c = 0;
            if(s[i] == special){
                c = 1;
                for(int j = i + 1; j < s.length(); j++){
                    if(s[j] != special){
                        c++;
                    }else if(s[j] == special){
                        break;
                    }
                }
                result = result + s.substr(i+1,c-1);
                i = i + c;
            }
        }
        cout << result << endl;
    }
}