#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<set<char>> v;
    for(int i = 0; i < n; i++){
        string s;
        cin >> s;
        set<char> st;
        for(char c : s){
            st.insert(c);
        }
        v.push_back(st);
    }
    set<char> match;
    for(set<char> currentSet : v){
        for(char c : currentSet){
            int count = 0; 
            for(set<char> otherSet : v){
                if(otherSet.find(c) != otherSet.end()){
                    count++;
                }
            }
            if(count == n){
                match.insert(c);
            }
        }
    }

    if(match.empty()){
        cout << "NO COMMON CHARACTERS";
    }
    else{
        for(char c : match){
            cout << c << ' ';
        }
    }
    return 0;
}