#include <iostream>

using namespace std;

string unique_divider(unsigned long long n, unsigned long long tmp = 1){
    if (tmp == n) return "Yes";
    if (tmp > n) return "No";
    return unique_divider(n, 2 * tmp);
}
int main(){
    long long n;
    cin >> n;
    cout << unique_divider(n);
}