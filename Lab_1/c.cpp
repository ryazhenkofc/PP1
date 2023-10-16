#include <iostream>
using namespace std;

int main() {
  int n; 
  cin >> n;

  int r = 0; 
  for (int i = 0; i < 4; i++) { 
    r = r * 2 + n % 2; 
    n = n / 2; 
  }

  cout << r << endl; 

  return 0;
}