#include <iostream>
using namespace std;

int main(){

    int n, l, r;
    cin >> n >> l >> r;
    int nums[n];
    for(int i = 0; i < n; i++) cin >> nums[i];
    long long sum = 0;
    for(int i = l - 1; i < r; i++) sum += nums[i];
    cout << sum;

    return 0;
}