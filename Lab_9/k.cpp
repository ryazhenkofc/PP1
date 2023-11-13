#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int histogram_area(int n, vector<int> &v){
    int lenght = 0;
    stack<int> st;
    int area = 0;

    for(int i = 0; i < n; i++){
        while(!st.empty() && v[st.top()] >= v[i]){
            int tp = st.top();
            st.pop();
            lenght = st.empty() ? i : i - st.top() - 1;
            area = max(area, lenght * v[tp]);
        }
        st.push(i);
    }
    
    return area;
}

int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    cout << histogram_area(n, v) << endl;

    return 0;
}