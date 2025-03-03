#include<iostream>
using namespace std;
string single[] = { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };
string teens[] = { "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen" };
string tens[] = { "", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety" };
string thousands[] = { "", "thousand", "million", "billion", "trillion" };

string numtoword1(int num){
    string result;
    if(num >= 100){
        result += single[num/100] + " hundred";
        num %= 100;
        if(num) result += " ";
    }
    if (num >= 20) {
        result += tens[num / 10];
        num %= 10;
        if (num) result += " " + single[num];
    } else if (num >= 10) {
        result += teens[num - 10];
    } else if (num > 0) {
        result += single[num];
    }
    return result;
}
string numtoword(long long int num){
    if(num == 0) return "zero";
    string result;
    int thousandgroup = 0;
    while(num > 0){
        int chunk = num % 1000;
        if (chunk != 0) {
            string chunk_words = numtoword1(chunk);
            if (!thousands[thousandgroup].empty()) chunk_words += " " + thousands[thousandgroup];
            if (result.empty()) {
                result = chunk_words;
            } else {
                result = chunk_words + " " + result;
            }
        }
        num /= 1000;
        thousandgroup++;
    }
    return result;
}
int main(){
    long long int  n; cin >> n;
    cout << numtoword(n) << endl;
}