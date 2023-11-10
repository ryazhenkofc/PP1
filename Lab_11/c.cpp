#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    map<string, double> m;
    double total = 0;
    for(int i = 0; i < n; i++){
        string s;
        double x;
        cin >> s >> x;
        m[s] += x;
        total += x;
    }
    vector<pair<double, string>> v;
    for(auto x : m){
        x.second = x.second / total * 100;
        v.push_back(make_pair(x.second, x.first));
    }
    sort(v.rbegin(), v.rend());
    for(auto x : v){
        cout << x.second << ' ' << x.first << '%' << endl;
    }
    return 0;
}