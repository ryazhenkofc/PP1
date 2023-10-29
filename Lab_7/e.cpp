#include <iostream>

using namespace std;

string unique_divider(long long n, int tmp = 1){
    if (n == 2) return "Yes";
    if (tmp > n) return "No";
    return unique_divider(n, 2 * tmp);
}
int main(){
    long long n;
    cin >> n;
    cout << unique_divider(n);
}