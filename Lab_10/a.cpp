#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> marks(n);
    vector<string> names(n);
    for(int i = 0; i < n; i++){
        cin >> names[i] >> marks[i];
    }
    sort(names.begin(), names.end());
    sort(marks.begin(), marks.end());
    for(int i = 0; i < n; i++){
        cout << names[i] << " " << marks[i] << endl;
    }
    return 0;
}