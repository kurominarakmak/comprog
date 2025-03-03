#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cin >> n;
    int x1[n],y1[n],x2[n],y2[n];
    for(int i = 0; i < n; i++){
        cin >> x1[i] >> y1[i] >> x2[i] >> y2[i];
    }
    int maxoverlaparea = 0;
    int ractangle[n*n];
    int c = 0;
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            int maxx = min(x2[i],x2[j]) - max(x1[i],x1[j]);
            int maxy = min(y2[i],y2[j]) - max(y1[i],y1[j]);
            int op;
            op = maxx * maxy;
            if(maxx > 0 && maxy > 0){
                if(op > maxoverlaparea){
                    maxoverlaparea = op;
                }
            }
        }
    }
    if(maxoverlaparea == 0){
        cout << "No overlaps" << endl;
    }
    if(maxoverlaparea != 0){
        cout << "Max overlapping area = " << maxoverlaparea << endl;
        for(int i = 0; i < n;i++){
            for(int j = i+1; j< n; j++){
                int maxx = min(x2[i],x2[j]) - max(x1[i],x1[j]);
                int maxy = min(y2[i],y2[j]) - max(y1[i],y1[j]);
                int op = maxx * maxy;
                if(op == maxoverlaparea && maxx > 0 && maxy > 0){
                    cout << "rectangles " << i << " and " << j <<endl;
                }
            }
        }
    }
}