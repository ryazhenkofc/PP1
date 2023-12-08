#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

bool is_prime(int n){
    if(n == 0) return false;
    if(n == 1 or n == -1) return false;
    if(n < 0) n *= -1;
    for(int i = 2; i * i <= n; i++){
        if(n % i == 0) return false;
    }
    return true;
}

int main(){

  int n;
  cin >> n;
  vector<int> arr(n);

  for(int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  int count = count_if(arr.begin(), arr.end(), is_prime);

  cout << count;

  return 0;
}
