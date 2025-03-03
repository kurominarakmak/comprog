#include<iostream>
using namespace std;
int main(){
    int x;
    cin >> x;
    if(x<=100){
        cout << "18" <<endl;
    }else{
        if(x>100&&x<=250){
            cout <<"22"<<endl;
        }else{
            if(x>250&&x<=500){
                cout << "28" <<endl;
            }else{
                if(x>500&&x<=1000){
                    cout << "38" <<endl;
                }else{
                    if(x>1000&&x<=2000){
                        cout << "58" << endl;
                    }else{
                        if(x>2000){
                            cout <<"Reject" <<endl;
                        }
                    }
                }
            }
        }
    }
}