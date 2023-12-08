#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

unsigned long long toBinary(unsigned long long n){
    if (n == 0) 
        return 0; 
    else
        return (n % 2 + 10 * toBinary(n / 2));
}

int main(){
    unsigned long long n;
    cin >> n;
    vector<unsigned long long> v(n);
    for(unsigned long long i = 0; i < n; i++) cin >> v[i];
    for_each(v.begin(), v.end(), [](unsigned long long x){cout << toBinary(x) << endl;});
    return 0;
}