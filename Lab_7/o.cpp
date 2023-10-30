#include <iostream>
#include <algorithm>
using namespace std;
const string dict = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
string to_kinary(int n, int k, string s){
    return n == 0 ? s : to_kinary(n / k, k, s + dict[n % k]);
}

int main(){
    int n, k;
    cin >> n >> k;
    string s = "";
    string ans = to_kinary(n, k, s);
    reverse(ans.begin(), ans.end());
    cout << ans; 
}