#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

unsigned long long power(int x, int y){
    unsigned long long res = 1;
    for(int i = 0; i < y; i++) res *= x;
    return res;
}

int main(){
    int n;
    cin >> n;
    vector<unsigned long long> v(n + 1);
    generate(v.begin(), v.end(), [i = -1]()mutable {i++; return power(i, i); });
    for(long long x : v) cout << x << ' ';
    return 0;
}