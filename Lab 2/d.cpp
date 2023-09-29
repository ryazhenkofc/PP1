#include <iostream>

using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  if (n<=k)
  {
    cout<<2<<endl;
    }
  else{
    cout<<(2*n+k-1)/k<<endl;
  }
  return 0;
}