#include<iostream>
using namespace std;
int main(){
    int s;
    cin >> s;
    if( s >= 80 ){
        cout << "A" << endl;
    }else{
        if ( s >=  70){
            cout << "B" << endl;
        }else{
            if( s >= 60){
                cout << "C" << endl;
            }else{
                if( s >= 50 ){
                    cout << "D" << endl;
                }else{
                    cout << "F" << endl;
                }
            }
        }
    }
}