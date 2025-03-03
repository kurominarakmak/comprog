#include<iostream>
#include<set>
using namespace std;
int main(){
    int n;
    cin >> n;
    set<int> k;
    int c = 0;
    int a;
    while(cin >> a ){
        k.insert(a);
        if(n > a && n != a + a){
            if(k.find(n-a) != k.end()){
                c++;
            }
        }
    }
    cout << c << endl;
}