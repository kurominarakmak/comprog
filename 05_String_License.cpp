#include <iostream>
#include <string>
using namespace std;
int main () {
    string x;
    int m;
    cin >> x >> m;
    int sum = 0;
    int digit1 = (x[6] - '0') * 1;
    int digit2 = (x[5] - '0') * 10;
    int digit3 = (x[4] - '0') * 100;
    int digit4 = (x[2] - 'A') * 1000;
    int digit5 = (x[1] - 'A') * 26000;
    int digit6 = (x[0] - '0') * 676000;
    sum = digit1 + digit2 + digit3 + digit4 + digit5 + digit6 + m;
    int new1 = sum % 10;
    int new2 = (sum % 100) / 10;
    int new3 = (sum % 1000) / 100;
    int new4 = (sum % 26000) / 1000 + 65;
    int new5 = (sum % 676000) / 26000 + 65;
    int new6 = (sum % 6760000) / 676000;
    cout << new6 << char(new5) << char(new4) << '-' << new3 << new2 << new1;
}