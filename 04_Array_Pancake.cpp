#include<iostream>
using namespace std;

void flip(int a[], int k){
    for(int i = 0, j = k; i < j; i++, j--){
        swap(a[i], a[j]);
    }
}

int findmax(int a[], int x){ 
    int m = 0;
    for(int i = 1; i <= x; i++){
        if(a[i] > a[m]){
            m = i;
        }
    }
    return m;
}

void print(int a[], int x){
    for(int i = 0; i < x; i++){
        cout << a[i] << " " ;
    }
    cout << endl;
}

int main(){
    int n; 
    cin >> n;
    int cake[n];
    for(int i = 0; i < n; i++){
        cin >> cake[i];
    }

    print(cake, n);

    for(int i = n - 1; i > 0; i--){
        int y = findmax(cake, i);
        if(y != i){
            if(y > 0){
                flip(cake, y);
                print(cake, n);
            }
            flip(cake, i);
            print(cake, n);
        }
    }
}
