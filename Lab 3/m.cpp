#include <iostream>
#include <sstream>

using namespace std;

int main() {
  int num;
  string nums;
  getline(cin, nums);

  int sum = 0;
  stringstream n(nums);
  while (n >> num) sum += num;

  cout << sum << endl;

  return 0;
}