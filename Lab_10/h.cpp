#include <algorithm> 
#include <iostream>
#include <vector>
using namespace std;
 
int main(){

    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
    vector<int> unique_vector;
    for (int i = 0; i < n; i++) {
        bool is_unique = true;
        for (int j = 0; j < unique_vector.size(); j++) {
            if (arr[i] == unique_vector[j]) {
                is_unique = false;
                break;
            }
        }
        if (is_unique) {
            unique_vector.push_back(arr[i]);
        }
    }
    int unique_arr[unique_vector.size()];
    for(int i = 0; i < unique_vector.size(); i++) unique_arr[i] = unique_vector[i];

    if(unique_vector.size() == 1){
        cout << unique_vector[0] << endl;
    }
    else{
    do {
        for(int i = 0; i < unique_vector.size(); i++) cout << unique_arr[i] << ' ';
        cout << endl;
    } while (next_permutation(unique_arr, unique_arr + unique_vector.size()));
    }
    return 0;
}