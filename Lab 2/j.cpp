#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {   
        int tmp = nums[i];
        while (tmp > 0)
        {
            if (tmp % 10 == 0){
                count++;
            }
            tmp /= 10;
        }
        
    }
    cout << count << endl;

    return 0;
}