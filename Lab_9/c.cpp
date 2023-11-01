#include <iostream>
#include <map>

using namespace std;

int atleast_2_times(int n, map<int, int> m){
    int count = 0;
    for(auto i : m){
        if(i.second >= 2){
            count++;
        }
    }
    return count;
}

int main(){
    int n;
    cin >> n;
    map<int, int> m;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        m[x]++;
    }
    cout << atleast_2_times(n, m);
    return 0;
}