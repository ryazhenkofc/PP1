#include <iostream>
#include <algorithm>
#include <string>
#include <set>
using namespace std;

void sort_letters(string s){
    for (char& c : s) {
    c = tolower(c);
    }
    sort(s.begin(), s.end());
    set<char> ans;
    for(int i : s) ans.insert(i);
    int counter = 0;
    for(char j : ans) counter++;
    cout << counter << endl;
    for(char j : ans) cout << j << ' ';
}


int main(){
    string s;
    cin >> s;
    sort_letters(s);
    return 0;
}