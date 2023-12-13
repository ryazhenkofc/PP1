#include <iostream>
#include <vector>

using namespace std;

int gcd(int a, int b) {
    while(a != 0 and b != 0){
        if (a > b) {
            a = a % b;
        }
        else b = b % a;
    }
    return a + b;
}

int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    int max = 0;
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            int num = gcd(v[i], v[j]);
            if(num > max){
                max = num;
            }
        }
    }
    cout << max << endl;
    return 0;
}