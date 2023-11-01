#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int num_of_elements(int n, int *a, int *b) {
    sort(a, a + n);
    sort(b, b + n);

    int pairs = 0;

    for (int i = 0, j = 0; i < n && j < n;) {
        if (a[i] == b[j]) {
        pairs++;
        i++;
        j++;
        } 
        else if (a[i] < b[j]) {
        i++;
        } 
        else {
        j++;
        }
    }

    return pairs;
}



int main() {
    int n;
    cin >> n;
    int a[n];
    int b[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }

    cout << num_of_elements(n, a, b);

    return 0;
}
