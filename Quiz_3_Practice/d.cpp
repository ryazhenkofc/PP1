#include <iostream>
#include <algorithm>

using namespace std;

// string dec_to_hex(int n){
//     string hex = "0123456789ABCDEF";
//     string ans = "";
//     while(n > 0){
//         ans.push_back(hex[n % 16]);
//         n /= 16;
//     }
//     reverse(ans.begin(), ans.end());
//     return ans;
// }

string dec_to_hex(int n){
    string hex = "0123456789ABCDEF";
    if(n <= 0) return "";
    else return dec_to_hex(n/16) + hex[n%16];
}


int main(){
    int n;
    cin >> n;
    cout << dec_to_hex(n);
    return 0;
}