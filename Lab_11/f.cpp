#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int a, b, k;
    cin >> a >> b >> k;
    vector<int> common_divisors;
    int biggest = max(a, b);
    for(int i = 1; i <= biggest; i++){
        if(a % i == 0 and b % i == 0){
            common_divisors.push_back(i);
        }
    }
    reverse(common_divisors.begin(), common_divisors.end());
    cout << endl << common_divisors[k-1];
    return 0;
}