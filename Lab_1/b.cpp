#include <iostream>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k; 
  int m = k / 100 + k % 10; 
  int code = n + m; 
  cout << code << endl;
  return 0;
}