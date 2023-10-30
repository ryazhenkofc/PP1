#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

string find_k(vector<int>& v, int k){
    auto num = find(v.begin(), v.end(), k);
    if(num != v.end()){
        return "Yes";
    }
    else return "No";
}


int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    int k;
    cin >> k; 
    cout << find_k(v, k);
    return 0;
}