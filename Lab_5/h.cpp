#include <iostream>
#include <string>
#include <map>
using namespace std;

bool digits(string s) {
    map<char, int> freq;

    for (char c : s) {
        freq [c]++;
    }

    int first = freq.begin ()->second;

    for (auto it : freq) {
        if (it.second != first) return false;
    }

    return true;
}

int main () {
    string s;
    cin >> s;

    digits(s) ? cout << "YES" : cout << "NO";
    return 0;
}
