#include <iostream>
#include <map>

using namespace std;

int contacts(map<string, int> m){
    int count = 0;
    for(auto it = m.begin(); it != m.end(); it++){
        if(it->second == 3){
            count++;
        }
    }
    return count;
}

int main(){
    int n;
    cin >> n;
    map<string, int> m;
    for(int i = 0; i < n; i++){
        string s;
        cin >> s;
        m[s]++;
    }
    cout << contacts(m);
    return 0;
}