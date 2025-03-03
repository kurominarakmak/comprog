#include<iostream>
#include<map>

using namespace std;
int main(){
    int n;
    double price;
    map<string,double> list;
    cin >> n;
    string name; 
    for(int i = 0; i < n; i++){
        cin >> name >> price;
        list[name] = price;
    }
    map<string,double> top;
    int m; cin >> m;
    double total = 0.0;
    double maxt = 0;
    string n1; int num;
    for(int i = 0; i < m; i++){
        cin >> n1 >> num;
        if(list.find(n1) != list.end()){
            total = total + (list[n1]*num);
            top[n1] += list[n1]*num;
            maxt = max(maxt,top[n1]);
        }
    }
    if(total == 0){
        cout << "No ice cream sales";
    }else {
        cout << "Total ice cream sales: " << total << endl;
        cout << "Top sales: " ;
        for(auto &x : top){
            if(x.second == maxt){
                cout << x.first << " ";
            }
        }
    }
}