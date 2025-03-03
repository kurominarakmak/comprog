#include<iostream>
#include<cmath>
using namespace std;
int main(){
    double x,y,z,w;
    cin >> x;
    y = x/1000;
    z = x/1000000;
    w = x/1000000000;
    if(x<1000){
        cout << x <<endl;
    }else{
        if(x>=1000&&x<10000){
            cout << round(y*10)/10.0 << "K" <<endl;
        }else{
            if(x>=10000 && x <1000000){
                cout <<round(y) << "K" <<endl;
            }else{
                if(x>=1000000&&x<10000000){
                    cout << round(z*10)/10.0 << "M" <<endl;
                }else{
                    if(x>=10000000 && x <1000000000){
                        cout << round(z) << "M" << endl;
                    }else{
                        if(x > 1000000000 && x<10000000000){
                            cout << round(w*10)/10.0 << "B" <<endl;
                        }else{
                            if(x >= 10000000000){
                                cout << round(w) << "B" << endl;
                            }
                        }
                    }
                }
            }
        }
    }
}