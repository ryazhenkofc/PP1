#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void euclidean_sort(int n){
     vector<pair<int,int>> v;
    for(int i = 0; i < n; i++){
        int a, b;
        cin >> a >> b;
        v.push_back(make_pair(a,b));
    }
    sort(v.begin(), v.end());
    
    for (const auto &pair : v) {
        cout << pair.first << ' ' << pair.second << endl;
    }
}

int main(){
    int n;
    cin >> n;
   euclidean_sort(n);
}