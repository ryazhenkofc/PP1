#include <iostream>
#include <vector>

using namespace std;

int number_of_primes(vector<int>& v, int k){
    bool isPrime = true;
    int count = 0;
    for(int i = 0; i < v.size(); i++){
        isPrime = true;
        for(int j = 2; j < v[i]; j++){
            if(v[i] % j == 0){
                isPrime = false;
                break;
            }
        }
        if(v[i] > k and isPrime){
            count++;
        }
    } 
    return count;
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

    cout << number_of_primes(v,k);
    return 0;
}