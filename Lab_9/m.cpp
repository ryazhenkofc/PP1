#include <iostream>
#include <queue>

using namespace std;

int main(){
    queue<string> q;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        if(x == 1){
            string s;
            cin >> s;
            q.push(s);
        }
        else{
            q.pop();
        }
        q.empty() ? cout << "queue is empty" << endl : cout << q.front() << endl;
    }
    return 0;
}