#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }
    int count = count_if(nums.begin(), nums.end(), [](int x){return x > 0;});
    cout << count << endl;

    return 0;
}