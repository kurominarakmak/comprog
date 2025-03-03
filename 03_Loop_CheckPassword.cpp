#include<iostream>
#include<string>
using namespace std;
int main(){
    string p;
    while(getline(cin,p)){
        if(p.length() == 0){
            break;
            }
        if(p.length() < 8){
            cout << ">> invalid" << endl;
            break;
        }
        bool u = false, l = false, n = false, s = false;
        if(p.length() >= 8){
            for(int i = 0; i < p.length();i++){
                if (p[i]>='A'&&p[i]<='Z') u =true;
                if (p[i]>='a'&&p[i]<='z') l = true;
                if (p[i]>='0'&&p[i]<='9') n = true;
                if ((p[i]>=' '&&p[i]<='/')||(p[i]>=':'&&p[i]<='@')||(p[i]>='['&&p[i]<='`')||(p[i]>='{'&&p[i]<='~')) s = true; 
            }
        }
        if (p.length()>=12&&u&&l&&n&&s) {
            cout << ">> strong" << endl;
        }
        else if (p.length()>=8&&u&&l&&n) {
            cout << ">> weak" << endl;
        }
        else {
            cout << ">> invalid" << endl;
        }
    }
}