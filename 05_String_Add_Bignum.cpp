#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main() {
    string n;
    const int maxdigits = 1000;
    int sum[maxdigits] = {0};
    int other = 0;
    int sumsize = 0;
    while (cin >> n) {
        int num[maxdigits] = {0};
        if (n == "END") {
            break;
        }
        int nlen = n.length();
        for (int i = 0; i < nlen; i++) {
            num[i] = n[nlen - i - 1] - '0';
        }
        int size = max(nlen, sumsize);
        for (int i = 0; i < size; i++) {
            int digitsum = num[i] + sum[i] + other;
            sum[i] = digitsum % 10;
            other = digitsum / 10;
            if (other && i==size-1)
                size++;
        }
        sumsize = size;
    }
    for (int i = sumsize - 1; i >= 0; i--) {
        cout << sum[i];
    }
}