#include <iostream>
#include <vector>
#include <set> 
#include <algorithm>
#include <sstream>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; ++i) { // Creating vector for reading lines from input such as "1 2 3 4 5"
        cin >> nums[i];
    }
    int count = count_if(nums.begin(), nums.end(), [](int x) { return x > 0; }); // Counting positive numbers in vector


    int num;
    string arr; 
    getline(cin, arr); // Reading string from input

    int sum = 0;
    stringstream x(arr); // Creating stringstream object 
    while (x >> num) sum += num; // Sum of numbers in string

    vector<int> odd_nums; //
    copy_if(nums.begin(), nums.end(), back_inserter(odd_nums), [](int x) { return x % 2 == 1; }); // copying vector with odd numbers

    for (int i = 0; i < n; i++) {
        cout << nums[i] << " "; // printing the vector(array)
    }

    int min_idx = min_element(nums.begin(), nums.end()) - nums.begin(); // finding the index of minimum element
    int max_idx = max_element(nums.begin(), nums.end()) - nums.begin(); // finding the index of maximum element

    swap(nums[min_idx], nums[max_idx]); // swapping the minimum and maximum elements

    sort(nums.begin(), nums.end()); // sorting the vector
    
    reverse(nums.begin(), nums.end()); // reversing the vector

    nums[max_idx] = nums[min_idx]; // replacing the maximum element with the minimum element

    set<int> s; // creating set
    for (auto it = s.begin(); it != s.end(); it++) { // iterating through the set and printing it
        cout << *it << " ";
    }

    for (int i = 0; i < n; i++) {
        cout << nums[i] << " ";
    }
    return 0;

}