#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(pair<pair<int, int>, double>& a, pair<pair<int, int>, double>& b){
    return a.second < b.second;
}

int main(){
    int x1, y1;
    cin >> x1 >> y1;
    int n;
    cin >> n;
    vector<pair<pair<int, int>, double>> v;
    for(int i = 0; i < n; i++){
        int x2, y2;
        cin >> x2 >> y2;
        double distance = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
        v.push_back({{x2, y2}, distance});
    }
    sort(v.begin(), v.end(), compare);
    for(pair<pair<int, int>, double> p: v){
        cout << p.first.first << " " << p.first.second << endl;
    }
    return 0;
}