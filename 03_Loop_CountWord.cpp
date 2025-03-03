#include<iostream>
#include<string>
using namespace std;
int main(){
    string word,sentence;
    cin >> word;
    cin.ignore();
    getline(cin,sentence);
    int n = sentence.length();
    int c = 0;
    for(int i = 0; i < n; i++){
        if(sentence[i] == '(' || sentence[i] == ')' || sentence[i] == ',' || sentence[i] == '.' || sentence[i] == '"' || sentence[i]== 39){
            sentence[i] = 32;
        }
    }
    for(int i = 0;i <= n-word.length()+1;i++){
        if(sentence.substr(i,word.length()) == word){
            if(i == 0) c++;
            if(i >= 1){
                if(sentence[i-1] == 32  && sentence[i+word.length()] == 32){
                    c++;
                }
        
            }
            if(i == n - word.length()) c++;
        }
    }
    cout << c << endl;
}