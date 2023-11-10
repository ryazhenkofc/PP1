#include <iostream>
#include <set>
#include <vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    set<string> st;
    vector<string> v(n);
    for(int i = 0; i < n; i++){
        string s;
        cin >> s;
        v[i] = s;
    }
    for(string x : v) st.insert(x);
    for(string j : st){
        cout << j << ' ';
        int counter = 1;
        for(string i : v){
            if(j == i){
                cout << counter << endl;
                break;
            }
            counter++;
        }
    }

    return 0;
}
