#include <iostream>
#include <vector>
#include <string>
using namespace std;

int convert(const vector<string>& words) {
    int total = 0, current = 0;
    
    for (const string& word : words) {
        if (word == "soon") current = 0;
        else if (word == "neung") current = 1;
        else if (word == "song") current = 2;
        else if (word == "sam") current = 3;
        else if (word == "si") current = 4;
        else if (word == "ha") current = 5;
        else if (word == "hok") current = 6;
        else if (word == "chet") current = 7;
        else if (word == "paet") current = 8;
        else if (word == "kao") current = 9;
        else if (word == "et") current = 1;
        else if (word == "yi") current = 2;
        else if (word == "sip") {
            if (current == 0) current = 1;
            current *= 10;
        }
        else if (word == "roi") current *= 100;
        else if (word == "phan") current *= 1000;
        else if (word == "muen") current *= 10000;
        else if (word == "saen") current *= 100000;
        else if (word == "lan") current *= 1000000;

        total += current;
        current = 0;
    }

    return total;
}

vector<string> split_line(const string& line) {
    vector<string> words;
    string word;
    for (char ch : line) {
        if (ch == ' ') {
            if (!word.empty()) {
                words.push_back(word);
                word.clear();
            }
        } else {
            word += ch;
        }
    }
    if (!word.empty()) {
        words.push_back(word);
    }
    return words;
}
int main() {
    string line;
    while (getline(cin, line)) {
        if (line == "q") break;
        vector<string> words = split_line(line);
        cout << convert(words) << endl;
    }
}
