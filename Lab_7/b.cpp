#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void toBinary(int n){
    // if (n == 0) 
    //     return 0; 
    // else
    //     return (n % 2 + 10 * toBinary(n / 2));
    vector<int> binary;
    while(n > 0){
        binary.push_back(n % 2);
        n /= 2;
    }
    reverse(binary.begin(),binary.end());
    for(int i = 0; i < binary.size(); i++) cout << binary[i]; 
    return;
}
 
int main()
{
    int n;
    cin >> n;
    toBinary(n);
    // cout << toBinary(n);
}