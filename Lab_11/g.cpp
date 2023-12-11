#include <iostream>
#include <map>
#include <set>

using namespace std;

int main(){
    int n;
    cin >> n;
    set<pair<string, int>> s;
    string name;
    int score;
    for(int i = 0; i < n; i++){
        cin >> name >> score;
        s.insert({name, score});
    }
    map<string, int> m;
    for(auto i : s){
        m[i.first] += 1;
    }
    for(auto i : m){
        if(i.second >= 3){
            cout << i.first << ' ' << '+' << i.second / 3 << endl;
        }
        else{
            cout << i.first << ' ' << "NO BONUS" << endl;
        }
    }
    return 0;
}
