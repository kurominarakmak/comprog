#include <iostream>
#include <vector>
#include <utility>
#include <string>
using namespace std;
string grades[] = {"F", "D", "D+", "C", "C+", "B", "B+", "A", "A"};

int gradeToIndex(const string& grade) {
    for (int i = 0; i < 9; i++) {
        if (grades[i] == grade) return i;
    }
    return -1;
}

string indexToGrade(int index) {
    if (index > 8) return "A";
    return grades[index];
}

string upgrade(string l) {
    int index = gradeToIndex(l);
    return indexToGrade(index + 1);
}

int main() {
    string id,g;
    vector<pair<string, string>> students;
    cin >> id;
    while(id != "q") {
        cin >> g;
        students.push_back(make_pair(id, g));
        cin >> id;
    }

    string command;
    while (cin >> command) {
        for (auto& student : students) {
            if (student.first == command) {
                student.second = upgrade(student.second);
            }
        }
    }

    for (const auto& student : students) {
        cout << student.first << " " << student.second << endl;
    }
}
