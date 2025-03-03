#include <iostream>
#include <string>
using namespace std;
int main() {
    double agpax, bgpax;
    string acode, bcode;
    char acomp, bcomp, acal1, acal2, bcal1, bcal2;
    int status1=0, status2=0;
    cin >> acode >> agpax >> acomp >> acal1 >> acal2;
    cin >> bcode >> bgpax >> bcomp >> bcal1 >> bcal2;
    if (acomp == 'A' && acal1 <= 'C' && acal2 <= 'C') {status1 = 1;}
    if (bcomp == 'A' && bcal1 <= 'C' && bcal2 <= 'C') {status2 = 1;}
    if (status1 > status2) {cout << acode;}
    if (status2 > status1) {cout << bcode;}
    if (status1 == 1 && status2 == 1) {
        if (agpax < bgpax) {cout << bcode;}
        else if (bgpax < agpax) {cout << acode;}
        else {
            if (acomp > bcomp) {cout << bcode;}
            else if (bcomp > acomp) {cout << acode;}
            else {
                if (acal1 > bcal1) {cout << bcode;}
                else if (bcal1 > acal1) {cout << acode;}
                else {
                    if (acal2 > bcal2) {cout << bcode;}
                    else if (bcal2 > acal2) {cout << acode;}
                    else {cout << "Both";}
                }
            }
        }
    }
    else if (status1==0 && status2 ==0) {cout << "None";}
}